/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:17:55 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:17:57 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;	

	s = (char *) src;
	d = (char *) dst;
	if (!d && !s)
		return (0);
	while (n)
	{
		*d = *s;
		n--;
		d++;
		s++;
	}
	return (dst);
}
