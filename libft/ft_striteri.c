/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:19:51 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/09/08 17:19:53 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	ind;

	if (!s || !f)
		return ;
	ind = 0;
	while (s[ind])
	{
		f(ind, s + ind);
		ind++;
	}
}
