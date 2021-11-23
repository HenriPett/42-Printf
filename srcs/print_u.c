/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:51:38 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/11/23 19:54:55 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_fd(unsigned int n)
{
	static int		j;
	unsigned int	i;

	i = n;
	if (!j)
		j = 0;
	if (i > 9)
	{
		unsigned_fd(i / 10);
	}
	ft_putchar_fd((i % 10) + '0', 1);
	j++;
	if (n == 0)
		return (1);
	return (j);
}
