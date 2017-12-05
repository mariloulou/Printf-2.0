/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:10:28 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/05 09:34:33 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_spaces(char *str)
{
	ft_rifle(ft_howmany() - ft_strleni(str) + 1);
	if (ft_are_u_here('.') == 1 && ft_howmany() != 0 &&
			ft_strleni(str) != 0)
		ft_rifle(ft_precision() + 1);
}

void		ft_printf_s(char *str)
{
	ft_set_o();
	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	if (ft_are_u_here('-') == 0)
		ft_spaces(str);
	if (ft_are_u_here('.') == 0)
		ft_putstr(str);
	else if (ft_are_u_here('.') == 1)
		ft_putnstr(str, ft_precision());
	if (ft_are_u_here('-') == 1)
		ft_spaces(str);
	ft_fire();
}
