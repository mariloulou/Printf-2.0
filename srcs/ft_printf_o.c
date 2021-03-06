/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:02:22 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/25 11:14:11 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	o_parsing(char *ret)
{
	ft_reload();
	if (t_v.f[t_v.i] == 'o')
		return ;
	ft_rifle(ft_howmany() - ft_strleni(ret) - 1);
	if (ret[0] == '0')
		return ;
	if ((ft_are_u_here('#') == 0) || (ft_are_u_here('#') == 1 &&
				ft_are_u_here('-') == 1))
		ft_putchar(t_v.o);
	if (ft_are_u_here('-') == 0 && t_v.o == ' ')
		ft_putchar(' ');
	if (ft_are_u_here('.') == 1)
		ft_rifle(ft_precision() - ft_strleni(ret) - 1);
	if (ft_are_u_here('0') == 1 && ft_are_u_here('-') == 0)
		ft_putchar(t_v.o);
}

static void	ft_o_set_o(void)
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

void		ft_n_o(void)
{
	ft_reload();
	t_v.o = ' ';
	ft_rifle(ft_howmany());
	if (ft_howmany() > 0)
		ft_putchar(' ');
	if (ft_precision() != 0)
		ft_putchar('0');
	if (ft_are_u_here('#') == 1)
		ft_putchar('0');
	ft_fire();
	return ;
}

void		ft_printf_o(unsigned int n)
{
	char	*ret;
	int		i;

	i = 0;
	if (n == 0)
		return (ft_n_o());
	ft_o_set_o();
	ret = ft_u_itoa_base(n, 8);
	if (ft_are_u_here('-') == 0 || (ft_are_u_here('-') == 1 &&
			ft_are_u_here('.') == 1 && t_v.o == '0'))
	{
		o_parsing(ret);
		i++;
	}
	if (ft_are_u_here('#') == 1 || (ft_are_u_here('.') == 1 &&
				ft_are_u_here('-') == 1))
		ft_putchar('0');
	ft_putstr(ret);
	if (i == 0)
		o_parsing(ret);
	free(ret);
	ft_fire();
}
