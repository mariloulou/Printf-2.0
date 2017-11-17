/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:31:23 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/17 13:19:09 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_ms(int nb)
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

char	*ft_itoa_base(int nb, int base)
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
