/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:18:01 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:18:02 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dest;
	s = (char *) src;
	if (s == d)
		return (dest);
	if (d > s)
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
