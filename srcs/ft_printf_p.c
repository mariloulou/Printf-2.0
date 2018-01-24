/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:48:04 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/24 10:43:48 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_printf_p(unsigned int n)
{
	char *ret;

	ft_putstr("0x");
	ret = ft_itoa_base(n, 16);
	ft_putstr(ret);
	free(ret);
}
