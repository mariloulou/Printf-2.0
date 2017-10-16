/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 00:05:47 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/14 23:59:54 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
**	ft_printf_d treats the d flag. It is used to write the given int parameter.
*/

void	ft_printf_d(void)
{
	ft_putnbr(t_v.d);
	return ;
}
