/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:22:21 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/25 11:13:51 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_xmaj(char *ret)
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

static void	x_parsing(char *ret)
{
	if (ft_are_u_here('#') == 0)
		ft_rifle((ft_howmany() - ft_strleni(ret) + 1));
	if (ft_are_u_here('#') == 1)
		ft_rifle((ft_howmany() - ft_strleni(ret) - 1));
}

void		ft_printf_hx(int n, char c)
{
	char	*ret;

	ft_set_o();
	ft_fire();
	ret = ft_u_itoa_base(n, 16);
	if (ft_are_u_here('-') == 0 && ft_are_u_here('0') == 0)
		x_parsing(ret);
	if (n != 0)
		ft_hashtag(c);
	if (c == 'X')
		ft_xmaj(ret);
	if (ft_are_u_here('-') == 0 && ft_are_u_here('0') == 1)
		x_parsing(ret);
	if (ft_precision() != 0)
		ft_putstr(ret);
	if (ft_are_u_here('-') == 1)
		x_parsing(ret);
	free(ret);
	t_v.i++;
}
