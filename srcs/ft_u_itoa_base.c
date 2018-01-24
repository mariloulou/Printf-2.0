/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_itoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:31:23 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/24 14:48:37 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		ft_ms(unsigned int nb, int base)
{
	int ret;

	if (nb == 0)
		return (2);
	ret = 0;
	while (nb > 0)
	{
		nb = nb / base;
		ret++;
	}
	return (ret);
}

char			*ft_u_itoa_base(unsigned int nb, int base)
{
	char	*chart;
	char	*ret;
	int		i;

	chart = "0123456789abcdef";
	ret = (char *)malloc(sizeof(char) * ft_ms(nb, base));
	if (nb == 0)
	{
		ret[0] = '0';
		ret[1] = '\0';
		return (ret);
	}
	i = (ft_ms(nb, base) - 1);
	ret[ft_ms(nb, base)] = '\0';
	while (nb > 0)
	{
		ret[i] = chart[nb % base];
		nb = nb / base;
		i--;
	}
	return (ret);
}
