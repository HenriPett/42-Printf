/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:21:06 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/10 19:37:31 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = ft_strlen(s);
	if (start < i)
	{
		if (i > len)
			p = (char *) malloc(sizeof(char) * len + 1);
		else
			p = (char *) malloc(sizeof(char) * i + 1);
		if (p == NULL)
			return (NULL);
		ft_strlcpy(p, &s[start], len + 1);
	}
	else
	{
		p = (char *) malloc(sizeof(char) * 1);
		if (p == NULL)
			return (NULL);
		ft_strlcpy(p, "", 1);
	}
	return (p);
}
