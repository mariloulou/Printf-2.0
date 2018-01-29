/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:57:31 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/29 14:22:53 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_ll(va_list list)
{
	t_v.i = t_v.i + 2;
	if (t_v.f[t_v.i] == 'd')
		ft_printf_lld(va_arg(list, long long int));
	if (t_v.f[t_v.i] == 'o')
		ft_printf_llo(va_arg(list, unsigned long long int));
	if (t_v.f[t_v.i] == 'u')
		ft_printf_u(va_arg(list, unsigned long long int), '2');
	if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_x(va_arg(list, unsigned long long int), t_v.f[t_v.i], '2');
}
