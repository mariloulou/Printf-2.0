/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 02:48:12 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/23 14:30:32 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		find_nb(char *bit)
{
	int tab[8];
	int i;
	int ret;

	tab[0] = 128;
	tab[1] = 64;
	tab[2] = 32;
	tab[3] = 16;
	tab[4] = 8;
	tab[5] = 4;
	tab[6] = 2;
	tab[7] = 1;
	i = 0;
	ret = 0;
	while (bit[i])
	{
		if (bit[i] == '1')
			ret = ret + tab[i];
		i++;
	}
	return (ret);
}

static void		uni_write(int *tab, int nb)
{
	if (nb == 1)
		write(1, &(tab[0]), 1);
	if (nb == 2)
	{
		write(1, &(tab[0]), 1);
		write(1, &(tab[1]), 1);
	}
	if (nb == 3)
	{
		write(1, &(tab[0]), 1);
		write(1, &(tab[1]), 1);
		write(1, &(tab[2]), 1);
	}
	if (nb == 4)
	{
		write(1, &(tab[0]), 1);
		write(1, &(tab[1]), 1);
		write(1, &(tab[2]), 1);
		write(1, &(tab[3]), 1);
	}
	return ;
}

void			ft_bitoi(char **tab, int nb)
{
	int i;
	int tabret[nb];

	i = 0;
	while (i <= nb)
	{
		tabret[i] = (find_nb(tab[i]));
		i++;
	}
	uni_write(tabret, (nb + 1));
}
