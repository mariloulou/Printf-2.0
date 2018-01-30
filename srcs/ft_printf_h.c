/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:14:11 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/30 14:08:31 by mcassar          ###   ########.fr       */
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
	if (t_v.f[t_v.i] == 'u' || t_v.f[t_v.i] == 'U')
		ft_printf_u(va_arg(list, unsigned long long int), t_v.f[t_v.i], 'h');
	if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_x(va_arg(list, unsigned long long int), t_v.f[t_v.i], 'h');
}
