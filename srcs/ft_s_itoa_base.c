/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_itoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:57:37 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/22 11:12:55 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		ft_ms(short int nb)
{
	int ret;

	if (nb == 0)
		return (2);
	ret = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		ret++;
	}
	return (ret);
}

char			*ft_s_itoa_base(short int nb, int base)
{
	char	*chart;
	char	*ret;
	int		i;

	chart = "0123456789abcdef";
	ret = (char *)malloc(sizeof(char) * ft_ms(nb));
	if (nb == 0)
	{
		ret[0] = '0';
		ret[1] = '\0';
		return (ret);
	}
	i = (ft_ms(nb) - 1);
	ret[ft_ms(nb)] = '\0';
	while (nb > 0)
	{
		ret[i] = chart[nb % base];
		nb = nb / base;
		i--;
	}
	return (ret);
}
