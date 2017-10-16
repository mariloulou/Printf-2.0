/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 23:45:24 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/18 08:26:55 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_hash(void)
{
	ft_putstr_fr("0X", 0);
	return ;
}

void		ft_printf_x_maj(void)
{
	int		i;
	char	*str;

	i = 0;
	str = (ft_u_itoa(t_v.xmaj, 16));
	if (ft_strfind(t_v.params, '#') == 1)
		ft_hash();
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	ft_putstr_fr(str, 1);
	return ;
}
