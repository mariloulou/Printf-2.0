/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 00:16:12 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/18 08:30:49 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
**	ft_malloc_size returns the righ malloc size used in ft_printf_hexa.
**		Var. int i = Return value.
*/

static int	ft_malloc_size(unsigned long int nb)
{
	int		i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

/*
**	ft_printf_hexa converts a given 10 based unsigned long int into its
**	hexadecimal value.
**		Var. int index		= Pointer going through char *hex.
**		Var. char *hex		= String containing hexadecimal values.
**		Var. char *result	= String containing the result of the
**								hexadecimal convertion.
**		Var. int i			= Pointer going through char *result.
*/

static int	ft_printf_hexa(unsigned long int nb)
{
	int		index;
	char	*hex;
	char	*result;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	result = (char*)malloc(sizeof(char*) * ft_malloc_size(nb) + 1);
	while (nb > 0)
	{
		index = nb % 16;
		result[i] = hex[index];
		i++;
		nb = nb / 16;
	}
	while (i >= 0)
	{
		ft_putchar(result[i]);
		i--;
	}
	free(result);
	return (0);
}

/*
**	ft_printf_p treat the p flag, used to print pointer addresses.
**	It prints in hexadecimal the void *pointer argument.
*/

void		ft_printf_p(void)
{
	ft_putstr("0x");
	ft_printf_hexa((unsigned long int)t_v.p);
	return ;
}
