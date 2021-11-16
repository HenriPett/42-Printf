/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:20:17 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:22:39 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		s_len;	
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	s_len = ft_strlen(s);
	if (!d || !s)
		return (0);
	if (!size)
		return (s_len);
	while (size - 1 && *s)
	{
		*d = *s;
		d++;
		s++;
		size--;
	}
	*d = '\0';
	return (s_len);
}
