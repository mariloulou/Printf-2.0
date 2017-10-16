/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 23:22:47 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/18 08:25:02 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"

static int		mallocsize(long int nb, int base)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

char			*ft_u_itoa(int nbr, int base)
{
	char			*ret;
	char			*chart;
	int				index;
	int				i;
	unsigned int	nb;

	if (nbr == 0)
		return (ft_strdup("0"));
	nb = nbr;
	ret = (char*)malloc(sizeof(char) * mallocsize(nb, base));
	chart = "0123456789abcdef";
	i = 0;
	while (nb > 0)
	{
		index = nb % base;
		ret[i] = chart[index];
		nb = nb / base;
		i++;
	}
	ft_strrev(ret);
	return (ret);
}
