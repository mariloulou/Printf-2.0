/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:14:11 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/25 11:24:31 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_h(va_list list)
{
	t_v.i++;
	if (t_v.f[t_v.i] == 'd')
		ft_printf_hd(va_arg(list, int));
	if (t_v.f[t_v.i] == 'o')
		ft_printf_ho(va_arg(list, unsigned int));
	if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_hx(va_arg(list, int), t_v.f[t_v.i]);
}
