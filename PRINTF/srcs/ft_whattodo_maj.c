/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whattodo_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 22:25:44 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/17 22:40:22 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_whattodo_maj_two(va_list list)
{
	if (t_v.flag[0] == 'O')
	{
		t_v.omaj = va_arg(list, int);
		ft_printf_o_maj();
	}
	else if (t_v.flag[0] == 'U')
	{
		t_v.umaj = va_arg(list, int);
		ft_printf_u_maj();
	}
	else if (t_v.flag[0] == 'X')
	{
		t_v.xmaj = va_arg(list, int);
		ft_printf_x_maj();
	}
	return ;
}

void	ft_whattodo_maj(va_list list)
{
	if (t_v.flag[0] == 'C')
	{
		t_v.cmaj = va_arg(list, wchar_t);
		ft_printf_c_maj();
	}
	else if (t_v.flag[0] == 'S')
	{
		t_v.smaj = va_arg(list, wchar_t *);
		ft_printf_s_maj();
	}
	else if (t_v.flag[0] == 'D')
	{
		t_v.dmaj = va_arg(list, int);
		ft_printf_d_maj();
	}
	ft_whattodo_maj_two(list);
}
