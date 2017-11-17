/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:42:17 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/17 15:44:05 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

char	*ft_nb_neg(int n)
{
	printf("-->%d<--\n", (unsigned int)n);
	return("hey");
}

void	ft_xmaj(char *ret)
{
	int i;

	i = 0;
	while (ret[i])
	{
		if (ret[i] >= 'a' && ret[i] <= 'z')
			ret[i] = ret[i] - 32;
		i++;
	}
}
void	ft_printf_x(int n, char c)
{
	char	*ret;

	ft_set_o();
	if (n < 0)
		ret = ft_nb_neg(n);
	ret = ft_itoa_base(n, 16);
	if (ft_are_u_here('-') == 0)
		ft_rifle((ft_howmany() - ft_strleni(ret) + 1));
	if (c == 'X')
		ft_xmaj(ret);
	ft_fire();
	ft_putstr(ret);
	if (ft_are_u_here('-') == 1)
		ft_rifle((ft_howmany() - ft_strleni(ret) + 1));
	free(ret);
}
