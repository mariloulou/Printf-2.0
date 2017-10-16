/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 03:09:10 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/18 08:29:18 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
**ft_printf_x treats the x flag.
**It converts the givent int parameter into its hexadecimal value.
*/

void	ft_printf_x(void)
{
	char *hexa;

	hexa = ft_itoa_base(t_v.x, 16);
	ft_putstr_fr(hexa, 1);
	return ;
}
