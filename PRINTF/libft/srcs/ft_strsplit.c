/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 08:42:33 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/12 08:09:09 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_split(char const *s, char c)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			ret++;
			while (s[i] != c)
				i++;
		}
		i++;
	}
	return (ret);
}

static size_t	ft_size(char const *s, char c, int i)
{
	size_t ret;

	ret = 0;
	while (s[i] != c && s[i] != '\0')
	{
		ret++;
		i++;
	}
	return (ret);
}

static char		**ft_tabwrite(char **tab, char c, char const *s)
{
	int		i;
	int		t1;
	int		t2;

	i = 0;
	t1 = 0;
	t2 = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			tab[t1] = ft_strnew(ft_size(s, c, i));
			while (s[i] != c && s[i] != '\0')
				tab[t1][t2++] = s[i++];
			t1++;
			t2 = 0;
		}
	}
	tab[t1] = NULL;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char*) * (ft_split(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = ft_tabwrite(tab, c, s);
	return (tab);
}
