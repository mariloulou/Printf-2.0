/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 02:47:39 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/12 08:17:23 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		malloc_size(int nb, int base)
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

static char		*ft_invert(char *str, int ms)
{
	char	*ret;
	int		i;
	int		j;

	ret = (char *)malloc(sizeof(char *) * ms);
	i = 0;
	j = ms - 1;
	while (i <= ms)
	{
		ret[i] = str[j];
		i++;
		j--;
	}
	ret[i] = '\0';
	return (ret);
}

char			*ft_itoa_base(int nb, int base)
{
	int		index;
	char	*chart;
	char	*ret;
	int		i;
	int		ms;

	chart = "0123456789abcdef";
	i = 0;
	ms = malloc_size(nb, base);
	ret = (char*)malloc(sizeof(char*) * ms + 1);
	while (nb > 0)
	{
		index = nb % base;
		ret[i] = chart[index];
		i++;
		nb = nb / base;
	}
	ret = ft_invert(ret, ms);
	return (ret);
}
