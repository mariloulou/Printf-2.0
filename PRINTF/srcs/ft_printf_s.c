/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 00:16:35 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/18 08:29:39 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
**	ft_printf_s treats the s flag. it is used to print the given
**	char * argument.
*/

void	ft_printf_s(void)
{
	ft_putstr(t_v.s);
	return ;
}
