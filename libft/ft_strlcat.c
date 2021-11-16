/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:20:08 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:20:10 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		d_len;
	size_t		s_len;

	d = dst;
	s = src;
	d_len = ft_strlen(d);
	s_len = ft_strlen(s);
	if (d_len >= size)
		return (s_len + size);
	else
		ft_strlcpy(d + d_len, s, size - d_len);
	return (d_len + s_len);
}
