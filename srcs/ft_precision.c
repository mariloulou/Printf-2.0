/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 10:06:55 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/24 12:22:27 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	ft_precision(void)
{
	int ret;

	ret = 0;
	if (ft_are_u_here('.') == 0)
		return (-1);
	ft_reload();
	while (t_v.f[t_v.i] != '.')
		t_v.i++;
	if (t_v.f[t_v.i + 1] < '0' || t_v.f[t_v.i + 1] > '9')
		return (0);
	t_v.i++;
	while (t_v.f[t_v.i] >= '0' && t_v.f[t_v.i] <= '9')
	{
		ret = ret * 10;
		ret = ret + t_v.f[t_v.i] - 48;
		t_v.i++;
	}
	return (ret);
}
