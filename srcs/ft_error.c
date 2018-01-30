/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 14:26:09 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/30 16:33:32 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		ft_isvalid(void)
{
	int i;

	i = 0;
	while (t_v.f[t_v.i] != t_v.valid[i] && t_v.valid[i])
		i++;
	if (t_v.f[t_v.i] == t_v.valid[i])
		return (0);
	return (-1);
}

static int		ft_ok(void)
{
	int i;

	i = 0;
	t_v.i++;
	while (t_v.valid[i])
	{
		if (t_v.f[t_v.i] == t_v.valid[i])
		{
			ft_reload();
			return (1);
		}
		i++;
	}
	ft_reload();
	return (0);
}

static int		ft_space(void)
{
	int i;

	i = 0;
	while (t_v.f[t_v.i] == ' ')
		t_v.i++;
	t_v.i--;
	if (ft_ok() == 0)
		return (1);
	t_v.i++;
	if (t_v.f[t_v.i] == 'h' || t_v.f[t_v.i] == 'l' || t_v.f[t_v.i] == 'z'
			|| t_v.f[t_v.i] == 'j')
	{
		if (ft_ok() == 0)
		{
			t_v.i++;
			return (1);
		}
	}
	return (0);
}

int				ft_error(void)
{
	if (ft_isvalid() == 0)
		return (0);
	ft_reload();
	if (t_v.i[t_v.f] == ' ')
	{
		if (ft_space() == 1)
			return (-1);
		else
			return (0);
	}
	if (ft_ok() == 0)
		ft_putchar(t_v.f[t_v.i]);
	return (-1);
}
