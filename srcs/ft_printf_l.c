/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:18:31 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/29 14:15:43 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_l(va_list list)
{
	t_v.i++;
	if (t_v.f[t_v.i] == 'c')
		ft_printf_lc(va_arg(list, wchar_t));
	if (t_v.f[t_v.i] == 'd')
		ft_printf_ld(va_arg(list, long int));
	if (t_v.f[t_v.i] == 'o')
		ft_printf_lo(va_arg(list, unsigned long int), 'o');
	if (t_v.f[t_v.i] == 's')
		ft_printf_ls(va_arg(list, wchar_t *));
	if (t_v.f[t_v.i] == 'u')
		ft_printf_u(va_arg(list, unsigned long long int), 'l');
	if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_x(va_arg(list, unsigned long int), t_v.f[t_v.i], 'l');
}
