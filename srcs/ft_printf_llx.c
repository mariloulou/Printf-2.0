/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_llx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:55:04 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/23 10:19:05 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_llx(unsigned long long int nb, char c)
{
	ft_hashtag(c);
	ft_fire();
	ft_putstr(ft_llu_itoa_base(nb, 16));
	while (t_v.f[t_v.i] != 'x' && t_v.f[t_v.i] != 'X')
		t_v.i++;
}
