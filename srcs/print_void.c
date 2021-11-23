/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:51:50 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/11/23 19:55:09 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_len(size_t n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 16;
		++count;
	}
	return (count);
}

static int	void_str(size_t n)
{
	t_types			strc;
	unsigned int	i;

	i = hex_len(n);
	strc.digits = "0123456789abcdef";
	strc.str = ft_calloc((i + 1), sizeof(char));
	if (!strc.str)
		return (0);
	while (i)
	{
		i--;
		strc.str[i] = strc.digits[n % 16];
		n = n / 16;
	}
	i = putstring_fd(strc.str);
	free(strc.str);
	strc.str = NULL;
	return (i);
}

int	hex_void(size_t n)
{
	int	i;

	i = 0;
	i += putstring_fd("0x");
	i += void_str(n);
	return (i);
}
