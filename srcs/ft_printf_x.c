/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:42:17 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/29 14:16:17 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static void	ft_xmaj(char *ret)
{
	int i;

	i = 0;
	while (ret[i])
	{
		if (ret[i] >= 'a' && ret[i] <= 'z')
			ret[i] = ret[i] - 32;
		i++;
	}
}

static void	x_parsing(char *ret)
{
	if (ft_are_u_here('#') == 0)
		ft_rifle((ft_howmany() - ft_strleni(ret) + 1));
	if (ft_are_u_here('#') == 1)
		ft_rifle((ft_howmany() - ft_strleni(ret) - 1));
}

static char	*ft_format(unsigned long long int n, char f)
{
	if (f == 'x')
		return (ft_u_itoa_base(n, 16));
	if (f == 'h')
		return (ft_u_itoa_base((unsigned short int)n, 16));
	if (f == '1')
		return (ft_u_itoa_base((unsigned char)n, 16));
	if (f == 'l')
		return (ft_lu_itoa_base((unsigned long int)n, 16));
	if (f == '2')
		return (ft_llu_itoa_base((unsigned long long int)n, 16));
	if (f == 'j')
		return (ft_j_itoa_base((uintmax_t)n, 16));
	if (f == 'z')
		return (ft_llu_itoa_base((size_t)n, 16));
	else
		return ("error");
}

void		ft_printf_x(unsigned long long int n, char c, char f)
{
	char	*ret;

	ft_set_o();
	ft_fire();
	ret = ft_format(n, f);
	if (ft_are_u_here('-') == 0 && ft_are_u_here('0') == 0)
		x_parsing(ret);
	if (n != 0)
		ft_hashtag(c);
	if (c == 'X')
		ft_xmaj(ret);
	if (ft_are_u_here('-') == 0 && ft_are_u_here('0') == 1)
		x_parsing(ret);
	if (ft_precision() != 0)
		ft_putstr(ret);
	if (ft_are_u_here('-') == 1)
		x_parsing(ret);
	free(ret);
	ft_push(f);
}
