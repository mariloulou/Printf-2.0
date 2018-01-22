/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:05:31 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/22 13:58:18 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		ft_size(int n)
{
	int ret;

	ret = 0;
	if (ft_are_u_here('+') == 1 && n >= 0)
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

void			ft_printf_d(int n)
{
	ft_set_o();
	if (ft_are_u_here(' ') == 1 && ft_are_u_here('+') == 0 && n >= 0)
		ft_putchar(' ');
	if (ft_are_u_here('+') == 1 && n >= 0)
		ft_putchar('+');
	if (n < 0)
		ft_putchar('-');
	ft_rifle(ft_howmany() - ft_size(n) + 1);
	ft_putnbr(n);
	ft_fire();
}
