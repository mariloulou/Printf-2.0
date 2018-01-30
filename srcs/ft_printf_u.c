/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:27:48 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/30 14:19:27 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static char	*ft_format(unsigned long long int nb, char c, char f)
{
	if (c == 'U')
		return (ft_llu_itoa_base(nb, 10));
	else if (f == 'u')
		return (ft_u_itoa_base((unsigned int)nb, 10));
	else if (f == 'l')
		return (ft_lu_itoa_base((unsigned long int)nb, 10));
	else if (f == '2')
		return (ft_llu_itoa_base(nb, 10));
	else if (f == 'h')
		return (ft_u_itoa_base((unsigned short int)nb, 10));
	else if (f == '1')
		return (ft_u_itoa_base((unsigned char)nb, 10));
	else if (f == 'z')
		return (ft_lu_itoa_base((size_t)nb, 10));
	else if (f == 'j')
		return (ft_lu_itoa_base((uintmax_t)nb, 10));
	else
		return ("error");
}

void		ft_printf_u(unsigned long long int nb, char c, char f)
{
	char *ret;

	ret = ft_format(nb, c, f);
	ft_set_o();
	if (ft_are_u_here('.') == 1 && ft_precision() > ft_howmany())
	{
		t_v.o = '0';
		ft_rifle(ft_precision() - ft_strleni(ret) + 1);
	}
	else if (ft_are_u_here('.') == 1 && ft_precision() <= ft_howmany())
	{
		if (ft_are_u_here('-') == 0)
			ft_rifle(ft_howmany() - ft_strleni(ret) + 1 - ft_precision());
		t_v.o = '0';
		ft_rifle(ft_precision() - ft_strleni(ret));
	}
	else if (ft_are_u_here('-') == 0)
		ft_rifle(ft_howmany() - ft_strleni(ret) + 1);
	ft_putstr(ret);
	if (ft_are_u_here('-') == 1)
		ft_rifle(ft_howmany() - ft_strleni(ret) + 1);
	free(ret);
	ft_push(f);
}
