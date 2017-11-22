/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whattodo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 16:28:03 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/22 11:21:21 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_whattodo(va_list list)
{
	t_v.i++;
	ft_fire();
	if (t_v.f[t_v.i] == 'l' && t_v.f[t_v.i + 1] != 'l')
		ft_printf_l(list);
	else if (t_v.f[t_v.i] == 'l' && t_v.f[t_v.i + 1] == 'l')
		ft_printf_ll(list);
	else if (t_v.f[t_v.i] == 'h' && t_v.f[t_v.i + 1] != 'h')
		ft_printf_h(list);
	else if (t_v.f[t_v.i] == 'h' && t_v.f[t_v.i + 1] == 'h')
		ft_printf_hh(list);
	else if (t_v.f[t_v.i] == 'j')
		ft_printf_j(list);
	else if (t_v.f[t_v.i] == 'c')
		ft_printf_c(va_arg(list, int));
	else if (t_v.f[t_v.i] == '%')
		ft_printf_percent();
	else if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_x(va_arg(list, unsigned int), t_v.f[t_v.i]);
}
