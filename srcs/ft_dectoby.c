/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectoby.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 13:54:34 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/23 15:03:50 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int	ft_mallocsize(int c)
{
	int ret;

	ret = 0;
	while (c > 0)
	{
		c = c / 2;
		ret++;
	}
	return (ret);
}

static char	ft_char(int c)
{
	if (c == 1)
		return ('1');
	else
		return ('0');
}

char		*ft_dectoby(int c)
{
	int		i;
	char	*ret;

	ret = (char *)malloc(sizeof(char) * ft_mallocsize(c) + 1);
	i = ft_mallocsize(c);
	ret[i] = '\0';
	i--;
	while (i >= 0)
	{
		ret[i] = ft_char(c % 2);
		c = c / 2;
		i--;
	}
	return (ret);
}
