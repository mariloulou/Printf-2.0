/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:18:31 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/22 10:13:49 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_l(va_list list)
{
	t_v.i++;
	if (t_v.f[t_v.i] == 'x' || t_v.f[t_v.i] == 'X')
		ft_printf_lx(va_arg(list, unsigned long int));
}
