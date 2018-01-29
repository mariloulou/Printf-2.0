/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 11:53:15 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/29 16:05:57 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int	ft_whichmask(int size)
{
	if (size <= 7)
	{
		t_v.ret = t_v.ret + 1;
		return (0);
	}
	if (size <= 11)
	{
		t_v.ret = t_v.ret + 2;
		return (1);
	}
	if (size > 11 && size <= 16)
	{
		t_v.ret = t_v.ret + 3;
		return (2);
	}
	else
	{
		t_v.ret = t_v.ret + 4;
		return (3);
	}
}

static char	*ft_x_to_0(char *mask)
{
	int		i;

	i = 0;
	while (mask[i])
	{
		if (mask[i] == 'x')
			mask[i] = '0';
		i++;
	}
	return (mask);
}

static char	*ft_fill_mask(int m, char *bin)
{
	int		i;
	int		j;
	char	**tab;
	char	*mask;

	tab = (char**)malloc(sizeof(char**) * 4 + 1);
	tab[0] = "0xxxxxxx\0";
	tab[1] = "110xxxxx10xxxxxx\0";
	tab[2] = "1110xxxx10xxxxxx10xxxxxx\0";
	tab[3] = "11110xxx10xxxxxx10xxxxxx10xxxxxx\0";
	mask = ft_strdup(tab[m]);
	free(tab);
	i = (ft_strlen(bin) - 1);
	j = (ft_strlen(mask) - 1);
	while (i >= 0)
	{
		if (mask[j] == 'x')
		{
			mask[j] = bin[i];
			i--;
		}
		j--;
	}
	return (mask);
}

static char	**ft_split_bytes(char *bytes, int nb)
{
	char	**tab;
	int		i;
	int		j;
	int		b;

	i = 0;
	j = 0;
	b = 0;
	tab = (char**)malloc(sizeof(char**) * (nb + 1) + 1);
	while (i <= (nb + 1))
	{
		tab[i] = (char*)malloc(sizeof(char*) * 8 + 1);
		while (j < 8)
		{
			tab[i][j] = bytes[b];
			j++;
			b++;
		}
		j = 0;
		i++;
	}
	return (tab);
}

void		ft_printf_lc(wchar_t c)
{
	char	*bin;
	char	*bin2;
	int		m;
	char	**tab;

	if (c >= 55296 && c <= 57343)
		return ;
	bin2 = ft_dectoby(c);
	m = ft_whichmask(ft_strlen(bin2));
	bin = ft_fill_mask(m, bin2);
	free(bin2);
	bin = ft_x_to_0(bin);
	tab = ft_split_bytes(bin, m);
	free(bin);
	ft_bitoi(tab, m);
	m++;
	while (m >= 0)
	{
		free(tab[m]);
		m--;
	}
	free(tab);
}
