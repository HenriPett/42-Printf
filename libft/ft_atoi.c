/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:16:34 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:16:36 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhite(int	c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	r;
	int	signal;

	signal = 1;
	r = 0;
	while ((ft_iswhite((int) *nptr)) && *nptr)
		nptr++;
	if (*nptr == '-')
	{
		signal = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit((int) *nptr))
	{
		r *= 10;
		r += ((*nptr - '0') * signal);
		nptr++;
	}
	return (r);
}
