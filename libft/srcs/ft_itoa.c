/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:56:32 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 15:17:17 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**		FT_MALLOCSIZE
**		The ft_mallocsize function is used to determine the size of
**			the string created to contain the char reprentation of the
**			given int representation.
**		- int i			= Returned result.
*/

static int		ft_mallocsize(int c, int min)
{
	int i;

	i = 1;
	if (min == 1)
		i++;
	while (c > 9)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

/*
**		FT_EX
**		The ft_ex function handles ft_itoa's attitude toward exeptions
**			being sent as parameters.
*/

static char		*ft_ex(int c)
{
	if (c == 0)
		return (ft_strdup("0"));
	if (c == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

/*
**		FT_ITOA
**		The ft_itoa function converts any given int representation
**			into character, stocking the in a char * representation.
**		- char *chart	= Is used as a mask to the good corresponding char
**							represention of the given integer.
**		- char *ret		= Is the returned string, containing the result
**							of ft_itoa.
**		- int i			= Index used to go trough (char *)ret.
**		- int n			= Used as save to handle negative numbers.
*/

char			*ft_itoa(int c)
{
	char	*chart;
	char	*ret;
	int		i;
	int		n;

	if (ft_ex(c) != NULL)
		return (ft_ex(c));
	n = (c < 0) ? 1 : 0;
	if (c < 0)
		c = -c;
	chart = ft_strdup("0123456789");
	ret = ft_strnew(ft_mallocsize(c, n));
	if (!ret)
		return (NULL);
	i = 0;
	while (c > 0)
	{
		ret[i++] = chart[c % 10];
		c = c / 10;
	}
	ret[i] = (n > 0) ? '-' : 0;
	ret = ft_strrev(ret);
	free(chart);
	return (ret);
}
