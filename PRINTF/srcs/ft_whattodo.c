/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whattodo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 19:20:32 by mcassar           #+#    #+#             */
/*   Updated: 2017/06/17 16:55:12 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_whattodo_min_two(va_list list)
{
	if (t_v.flag[0] == 'u')
	{
		t_v.u = va_arg(list, int);
		ft_printf_u();
	}
	else if (t_v.flag[0] == 'c')
	{
		t_v.c = va_arg(list, int);
		ft_printf_c();
	}
	else if (t_v.flag[0] == 'o')
	{
		t_v.o = va_arg(list, int);
		ft_printf_o();
	}
}

static void	ft_whattodo_min(va_list list)
{
	if (t_v.flag[0] == 'd')
	{
		t_v.d = va_arg(list, int);
		ft_printf_d();
	}
	else if (t_v.flag[0] == 'p')
	{
		t_v.p = va_arg(list, void *);
		ft_printf_p();
	}
	else if (t_v.flag[0] == 's')
	{
		t_v.s = va_arg(list, char *);
		ft_printf_s();
	}
	else if (t_v.flag[0] == 'x')
	{
		t_v.x = va_arg(list, int);
		ft_printf_x();
	}
	ft_whattodo_min_two(list);
}

static void	ft_whattodo_ell(va_list list)
{
	if (t_v.flag[0] == 'l' && t_v.flag[1] == 'd')
	{
		t_v.ld = va_arg(list, long int);
		ft_printf_ld();
	}
	return ;
}

static void	ft_whattodo_ell_ell(va_list list)
{
	if (t_v.flag[0] == 'l' && t_v.flag[1] == 'l' && t_v.flag[2] == 'd')
	{
		t_v.lld = va_arg(list, long int);
		ft_printf_lld();
	}
	return ;
}

/*
**	ft_whattodo is a directing function, telling wich function should be used,
**	depending on the flag found and provided by ft_whichflag. It's divided in
**	sub-functions, for norm respect, and easy access.
*/

void		ft_whattodo(char *format, va_list list)
{
	ft_whichparam(format + 1);
	ft_whichflag(format);
	if (ft_strlen(t_v.flag) == 2)
	{
		if (t_v.flag[0] == 'l' && t_v.flag[1] != 'l')
			ft_whattodo_ell(list);
	}
	else if (ft_strlen(t_v.flag) == 3)
	{
		if (t_v.flag[0] == 'l' && t_v.flag[1] == 'l' && t_v.flag[2] == 'd')
			ft_whattodo_ell_ell(list);
	}
	else if (ft_strlen(t_v.flag) == 1)
	{
		if (t_v.flag[0] >= 65 && t_v.flag[0] <= 90 && t_v.flag[0] != 'l')
			ft_whattodo_maj(list);
		else if (t_v.flag[0] >= 97 && t_v.flag[0] <= 122 && t_v.flag[0] != 'l')
			ft_whattodo_min(list);
		else if (t_v.flag[0] == '%')
			ft_putchar('%');
	}
}
