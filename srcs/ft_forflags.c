/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:34:00 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/24 13:58:46 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_howmany(void)
{
	int ret;

	ret = 0;
	ft_reload();
	while (t_v.f[t_v.i] == '-' || t_v.f[t_v.i] == '+' || t_v.f[t_v.i] == ' ' ||
			(t_v.f[t_v.i] == '#' || t_v.f[t_v.i] == '0'))
		t_v.i++;
	while (t_v.f[t_v.i] >= '0' && t_v.f[t_v.i] <= '9')
	{
		ret = ret * 10;
		ret = ret + (t_v.f[t_v.i] - 48);
		t_v.i++;
	}
	return (ret);
}

int		ft_is_flag(char c)
{
	int i;

	i = 0;
	while (t_v.flags[i])
	{
		if (c == t_v.flags[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_are_u_here(char c)
{
	ft_reload();
	while (ft_is_flag(t_v.f[t_v.i]) == 1)
	{
		if (t_v.f[t_v.i] == c)
			return (1);
		t_v.i++;
	}
	return (0);
}

void	ft_set_o(void)
{
	ft_reload();
	if (t_v.f[t_v.i] == '#')
		t_v.i++;
	if (t_v.f[t_v.i] == '0')
		t_v.o = '0';
	else
		t_v.o = ' ';
}
