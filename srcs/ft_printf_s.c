/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:10:28 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/01 12:20:03 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_s(char *str)
{
	ft_set_o();
	if (ft_are_u_here('.') == 0)
	{
		if (ft_are_u_here('-') == 0)
			ft_rifle(ft_howmany() - ft_strleni(str) + 1);
		ft_putstr(str);
		if (ft_are_u_here('-') == 1)
			ft_rifle(ft_howmany() - ft_strleni(str) + 1);
	}
	if (ft_are_u_here('.') == 1)
	{
		if (ft_are_u_here('-') == 0)
			ft_rifle(ft_howmany() - ft_strleni(str) + ft_precision() + 1);
		ft_putnstr(str, ft_precision());
		if (ft_are_u_here('-') == 1)
			ft_rifle(ft_howmany() - ft_strleni(str) + ft_precision() + 1);
	}
}
