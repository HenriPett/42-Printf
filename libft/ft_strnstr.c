/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:20:50 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:20:51 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	int			l_len;

	if (!big || !little)
		return (NULL);
	b = big;
	l = little;
	l_len = ft_strlen(l);
	if (!l_len)
		return ((char *) b);
	if ((int)len == -1)
		len = ft_strlen(big);
	while (*b && len)
	{
		if (*b == *l)
		{
			if (!(ft_strncmp(b, l, l_len)) && (int)l_len <= (int)len)
				return ((char *) b);
		}
		b++;
		len--;
	}
	return (NULL);
}
