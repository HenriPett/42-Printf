/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:47:05 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/11/23 19:57:14 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# include "../libft/libft.h"

int	ft_printf(const char *format, ...);

int	putchar_fd(char c);
int	putstring_fd(char *s);
int	putnbr_fd(int n);
int	unsigned_fd(unsigned int n);

int	hex_str(unsigned int n, char c);

int	hex_void(size_t n);

typedef struct s_types
{
	char	*str;
	char	*digits;
	int		i;
}	t_types;

#endif