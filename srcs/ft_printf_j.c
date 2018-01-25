/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_j.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:21:28 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/25 13:53:35 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_j(va_list list)
{
	t_v.i++;
	if (t_v.f[t_v.i] == 'd')
		ft_printf_jd(va_arg(list, intmax_t));
	if (t_v.f[t_v.i] == 'o')
		ft_printf_jo(va_arg(list, uintmax_t));
	if (t_v.f[t_v.i] == 'x')
		ft_printf_jx(va_arg(list, uintmax_t));
}
