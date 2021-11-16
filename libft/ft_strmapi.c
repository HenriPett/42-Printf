/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:20:39 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/10 19:24:38 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;

	i = ft_strlen(s) + 1;
	p = (char *) malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, i);
	i = 0;
	while (p[i])
	{
		p[i] = (*f)(i, p[i]);
		i++;
	}
	return (p);
}
