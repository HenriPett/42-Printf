/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:17:34 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/10 18:59:24 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_len(int i)
{
	size_t	size;

	size = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		size++;
		i = i / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t		i;
	size_t		minus;
	char		*p;

	i = int_len(n);
	minus = n < 0;
	i += minus;
	p = (char *) malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	p[i] = '\0';
	if (minus)
		p[0] = '-';
	while (--i != (minus - 1))
	{
		if ((n % 10) < 0)
			p[i] = ((n % 10) * -1) + 48;
		else
			p[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (p);
}
