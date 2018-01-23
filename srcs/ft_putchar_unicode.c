/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 01:40:07 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/23 13:51:34 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
**	ft_wichmask decides on wich mask to use, depending on the size of the
**	binary number, that will fill the chosen mask.
*/

static int	ft_whichmask(int size)
{
	if (size <= 7)
		return (0);
	if (size <= 11)
		return (1);
	if (size > 11 && size <= 16)
		return (2);
	else
		return (3);
}

/*
**	ft_x_to_0 replaces if needed all the remaining 'x' in the mask, after being
**	filled backwards by ft_fill_mask.
**		Var. int i = Pointer going through char *mask.
*/

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

/*
**	ft_fill_mask creates an array[4] containing the 4 possible multi-bytes
**	sequences that may be used to contain multi-bytes characters.
**	It stocks the right-sized sequence in a string, and then fill the string
**	backwards with the binary number we are treating.
**		Var. int i		= Pointer going through char *bin.
**		Var. int j		= Pointer going through char *mask.
**		Var. char **tab	= Array containing all the possible righ-sized sequence.
**		Var. char *mask = String taking the value of the corresponding number
**							of bytes in char **tab and being modified
*/

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

/*
**	ft_split_bytes is used to split the final binary number into 8 character
**	long strings, and stock them in a char array, for easy access.
**		Var. char **tab	= Array containing the split bytes.
**		Var. int i		= Pointer going through char *tab.
**		Var. int j		= Pointer going through char ** tab.
**		Var. int b		= Pointer going through char *bytes.
*/

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

/*
**	ft_printf_c_maj is used to treat the flag C. C flag is treated as c, with
**	the l (ell) modifier. It is used to convert wint_t argument into a wchar_t
**	The potencially multi_byte sequence is written.
**		Var. char *bin	= Binary number.
**		Var. int m		= Right-sized mask.
**	TA = Get info on what printf should do if setlocale value isn't defined.
**	TA = Printf return value should be -1
*/

void		ft_putchar_unicode(wchar_t c)
{
	char	*bin;
	int		m;

	if (c >= 55296 && c <= 57343)
		return ;
	bin = ft_itoa_base(c, 2);
	m = ft_whichmask(ft_strlen(bin));
	bin = ft_fill_mask(m, bin);
	bin = ft_x_to_0(bin);
	ft_bitoi(ft_split_bytes(bin, m), m);
}
