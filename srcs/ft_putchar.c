/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 11:48:49 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/04 10:13:13 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_putchar(char c)
{
	t_v.ret++;
	write(1, &c, 1);
}

void	ft_putnstr(char *str, int n)
{
	int i;

	i = 0;
	while (str[i] && n > 0)
	{
		ft_putchar(str[i]);
		i++;
		n--;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
