/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_z.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:55:49 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/29 14:29:24 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_z(va_list list)
{
	t_v.i++;
	if (t_v.f[t_v.i] == 'd')
		ft_printf_zd(va_arg(list, size_t));
	else if (t_v.f[t_v.i] == 'o')
		ft_printf_zo(va_arg(list, size_t));
	else if (t_v.f[t_v.i] == 'u')
		ft_printf_u(va_arg(list, size_t), 'z');
	else if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_x(va_arg(list, size_t), t_v.f[t_v.i], 'z');
}
