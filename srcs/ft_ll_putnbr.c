/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ll_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:32:15 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/24 15:01:05 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_ll_putnbr(long long int c)
{
	char *ret;

	if (c < -9223372036854775807)
		ft_putstr("-9223372036854775808");
	else
	{
		ret = ft_ll_itoa_base(c, 10);
		ft_putstr(ret);
		free(ret);
	}
}
