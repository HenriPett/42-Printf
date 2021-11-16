/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:17:42 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:17:44 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	if (!s)
		return (NULL);
	str = (unsigned char *) s;
	while (n)
	{
		if (*str == (unsigned char) c)
			return (str);
		n--;
		str++;
	}
	return (NULL);
}
