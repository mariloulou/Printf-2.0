/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:02:22 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/04 13:29:46 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	o_parsing(char *ret)
{
	if (ft_are_u_here('#') == 1 || (ft_are_u_here('.') == 1 &&
				ft_are_u_here('-') == 1))
		ft_rifle(ft_howmany() - ft_strleni(ret));
	else
		ft_rifle(ft_howmany() - ft_strleni(ret) + 1);
	if (ft_are_u_here('.') == 1)
		ft_rifle(ft_precision() - ft_strleni(ret));
}

static void	ft_o_set_o()
{
	ft_set_o();
	if (ft_are_u_here('.') == 1)
	{
		ft_reload();
		while (t_v.f[t_v.i] != '.')
			t_v.i++;
		while (t_v.f[t_v.i] != 'o')
		{
			if (t_v.f[t_v.i] == '0')
				t_v.o = '0';
			t_v.i++;
		}
	}
}


void	ft_printf_o(unsigned int n)
{
	char *ret;

	ft_o_set_o();
	ret = ft_u_itoa_base(n, 8);
	if (ft_are_u_here('-') == 0 || (ft_are_u_here('-') == 1 &&
				ft_are_u_here('.') == 1 && t_v.o == '0'))
		o_parsing(ret);
	if (ft_are_u_here('#') == 1 || (ft_are_u_here('.') == 1 &&
				ft_are_u_here('-') == 1))
		ft_putchar('0');
	ft_putstr(ret);
	if (ft_are_u_here('-') == 1 && t_v.o == ' ')
		o_parsing(ret);
	ft_fire();
}
