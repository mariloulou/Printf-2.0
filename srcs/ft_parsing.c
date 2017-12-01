/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:39:25 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/01 11:49:23 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_hashtag(char c)
{
	if (ft_are_u_here('#') == 0)
		return ;
	if (c == 'X')
		ft_putstr("0X");
	if (c == 'x')
		ft_putstr("0x");
}
