/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:50:20 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/11/23 19:54:35 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_arg(char p, va_list args)
{
	int	i;

	i = 0;
	if (p == '%')
		i = putchar_fd('%');
	else if (p == 'c')
		i = putchar_fd(va_arg(args, int));
	else if (p == 's')
		i = putstring_fd(va_arg(args, char *));
	else if (p == 'p')
		i = hex_void(va_arg(args, size_t));
	else if (p == 'd' || p == 'i')
		i = putnbr_fd(va_arg(args, int));
	else if (p == 'u')
		i = unsigned_fd(va_arg(args, unsigned int));
	else if (p == 'x' || p == 'X')
		i = hex_str(va_arg(args, size_t), p);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	argo;
	int		j;

	if (format == NULL)
		return (0);
	va_start(argo, format);
	j = 0;
	while (*format)
	{
		if (*format == '%' && ft_strchr("cspduixX%", *(format + 1)))
		{
			j += check_arg(*(format + 1), argo);
			format++;
		}
		else
		{
			j += putchar_fd(*format);
		}
		format++;
	}
	va_end(argo);
	return (j);
}
