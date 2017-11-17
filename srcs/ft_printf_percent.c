/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:21:59 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/17 11:28:03 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include <stdio.h>

static void	ft_rifle_diff(int nb, char c)
{
	while (nb > 1)
	{
		ft_putchar(c);
		nb--;
	}
}

static int	ft_are_u_here_diff(char c)
{
	t_v.i--;
	while (t_v.f[t_v.i] != '%')
		t_v.i--;
	t_v.i++;
	while (t_v.f[t_v.i] != '%')
	{
		if (t_v.f[t_v.i] == c)
		{
			while (t_v.f[t_v.i] != '%')
				t_v.i++;
			return (1);
		}
		t_v.i++;
	}
	return (0);
}

static int	ft_howmany_diff(void)
{
	int ret;

	ret = 0;
	t_v.i--;
	while (t_v.f[t_v.i] != '%')
		t_v.i--;
	t_v.i++;
	while ((t_v.f[t_v.i] < '0' || t_v.f[t_v.i] > '9') && t_v.f[t_v.i] != '%')
		t_v.i++;
	while (t_v.f[t_v.i] >= '0' && t_v.f[t_v.i] <= '9')
	{
		ret = ret * 10;
		ret = ret + (t_v.f[t_v.i] - 48);
		t_v.i++;
	}
	return (ret);
}

void		ft_printf_percent(void)
{
	if (ft_are_u_here_diff('.') == 1)
	{
		ft_putchar('%');
		return ;
	}
	if (ft_are_u_here_diff('-') == 0)
		ft_rifle_diff(ft_howmany_diff(), ' ');
	ft_putchar('%');
	if (ft_are_u_here_diff('-') == 1)
		ft_rifle_diff(ft_howmany_diff(), ' ');
}
