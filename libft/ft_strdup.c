/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:19:45 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:19:47 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	l;

	l = ft_strlen(s);
	ptr = malloc(l + 1);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s, l + 1);
	return (ptr);
}
