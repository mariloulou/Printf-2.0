/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 16:16:20 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/22 15:51:18 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_c(char c)
{
	ft_set_o();
	if (ft_are_u_here('-') == 0)
		ft_rifle(ft_howmany());
	ft_putchar(c);
	if (ft_are_u_here('-') == 1)
		ft_rifle(ft_howmany());
	ft_fire();
	return ;
}
