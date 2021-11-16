/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:18:11 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:18:20 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*dst;

	dst = (unsigned char *) str;
	while (n)
	{
		*dst = (unsigned char) c;
		dst++;
		n--;
	}	
	return (str);
}
