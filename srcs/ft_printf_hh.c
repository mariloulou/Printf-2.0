/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hh.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:16:33 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/26 13:36:35 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_hh(va_list list)
{
	t_v.i = t_v.i + 2;
	if (t_v.f[t_v.i] == 'd')
		ft_printf_hhd(va_arg(list, int));
	if (t_v.f[t_v.i] == 'o')
		ft_printf_hho(va_arg(list, unsigned int));
	if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_x(va_arg(list, unsigned int), t_v.f[t_v.i], '1');
}
