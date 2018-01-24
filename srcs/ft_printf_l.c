/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:18:31 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/24 14:20:24 by mcassar          ###   ########.fr       */
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
	if (t_v.f[t_v.i] == 's')
		ft_printf_ls(va_arg(list, wchar_t *));
	if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_lx(va_arg(list, unsigned long int));
}
