/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 03:49:21 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/12 04:19:21 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
**	ft_printf_s_maj is used to treat the S flag. It just calls repeatidly
**	ft_printf_c_maj, printing each character one by one. Treated as s flag
**	with the l (ell) modifier.
**		Var. int i = Pointer going through t_v.cmaj.
*/

void	ft_printf_s_maj(void)
{
	int i;

	i = 0;
	while (t_v.smaj[i])
	{
		t_v.cmaj = t_v.smaj[i];
		ft_printf_c_maj();
		i++;
	}
	return ;
}
