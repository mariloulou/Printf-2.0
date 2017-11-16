/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reload.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:22:17 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/16 15:37:24 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_reload(void)
{
	while (t_v.f[t_v.i - 1] != '%')
		t_v.i--;
}

void	ft_fire(void)
{
	while (ft_is_flag(t_v.f[t_v.i]) == 1)
		t_v.i++;
}

void	ft_rifle(int n)
{
	while (n > 1)
	{
		ft_putchar(t_v.o);
		n--;
	}
}
