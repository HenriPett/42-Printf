/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:21:02 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:21:03 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char const *set, char c)
{
	const char	*s;

	s = set;
	while (*s)
	{
		if ((char)*s == c)
			return (1);
		s++;
	}
	return (0);
}

static char	*get_start(char const *s1, char const *set)
{
	char const	*s;

	s = s1;
	while (*s)
	{
		if (!contains(set, *s))
			return ((char *)s);
		s++;
	}
	return ((char *)s);
}

static char	*get_end(char const *s1, char const *set)
{
	char const	*s;

	s = s1;
	while (*s)
		s++;
	s--;
	while (*s)
	{
		if (!contains(set, *s))
			return ((char *)s);
		s--;
	}
	return ((char *)s);
}

static size_t	word_len(char const *start, char const *end)
{
	char const	*s;
	char const	*e;
	size_t		len;

	s = start;
	e = end;
	len = 0;
	while (s <= e)
	{
		len++;
		s++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*output;
	size_t	m_len;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	m_len = word_len(start, end);
	output = malloc(m_len + 1);
	if (!output)
		return (NULL);
	ft_strlcpy(output, start, m_len + 1);
	return (output);
}
