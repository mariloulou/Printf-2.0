/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_jd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:01:20 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/25 13:53:46 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		ft_size(int n)
{
	int ret;

	ret = 0;
	if (ft_are_u_here('+') == 1 && n >= 0 && ft_are_u_here('.') == 0)
		ret++;
	if (n == 0)
		ret++;
	if (n < 0)
	{
		n = n * -1;
		ret++;
	}
	while (n > 0)
	{
		n = n / 10;
		ret++;
	}
	return (ret);
}

static	void	ft_else(int n)
{
	t_v.o = ' ';
	if (n < 0)
		ft_putchar('-');
	if (ft_are_u_here('-') == 0)
		ft_rifle(ft_howmany() - ft_precision());
	if (ft_are_u_here('+') == 0 && ft_are_u_here('-') == 0 && n < 0)
		ft_putchar('0');
	if (ft_are_u_here('+') == 0 && ft_are_u_here('-') == 0 && n >= 0 &&
			ft_precision() > 0)
		ft_putchar(' ');
	if (ft_are_u_here('+') == 1)
		ft_putchar('+');
	t_v.o = '0';
	ft_rifle(ft_precision() - ft_size(n) + 1);
	ft_ll_putnbr(n);
	ft_set_o();
	if (ft_are_u_here('-') == 1)
		ft_rifle(ft_howmany() - ft_precision());
	if (ft_are_u_here('-') == 1 && ft_are_u_here('+') == 0)
		ft_putchar(t_v.o);
}

static	void	ft_d_precision(int n)
{
	if (ft_precision() == 0 && n == 0)
	{
		ft_rifle(ft_howmany() + 1);
		ft_fire();
		return ;
	}
	if (ft_precision() > ft_howmany())
	{
		t_v.o = '0';
		if (n < 0)
		{
			ft_putchar('-');
			ft_putchar('0');
		}
		ft_rifle(ft_precision() - ft_size(n) + 1);
		ft_ll_putnbr(n);
	}
	else
		ft_else(n);
	ft_fire();
}

void			ft_printf_jd(intmax_t n)
{
	if (ft_are_u_here('.') == 1)
	{
		ft_d_precision(n);
		return ;
	}
	ft_set_o();
	if (ft_are_u_here('+') == 1)
		ft_putchar('+');
	if (ft_are_u_here('-') == 0)
		ft_rifle(ft_howmany() - ft_size(n) + 1);
	ft_ll_putnbr(n);
	if (ft_are_u_here('-') == 1)
		ft_rifle(ft_howmany() - ft_size(n) + 1);
	ft_fire();
	t_v.i = t_v.i + 1;
}
