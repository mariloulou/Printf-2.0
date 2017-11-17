/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whattodo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 16:28:03 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/17 12:58:12 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_whattodo(va_list list)
{
	t_v.i++;
	ft_fire();
	if (t_v.f[t_v.i] == 'c')
		ft_printf_c(va_arg(list, int));
	if (t_v.f[t_v.i] == '%')
		ft_printf_percent();
	if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_x(va_arg(list, int), t_v.f[t_v.i]);
}
