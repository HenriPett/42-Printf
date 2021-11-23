/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_id.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:51:24 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/11/23 19:57:48 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_fd(int n)
{
	int		i;
	char	*string;

	string = ft_itoa(n);
	i = putstring_fd(string);
	free(string);
	string = NULL;
	return (i);
}
