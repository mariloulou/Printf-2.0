/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:36:34 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/12 08:08:10 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_begin(char const *s)
{
	int b;

	b = 0;
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b++;
	return (b);
}

static int	ft_end(char const *s)
{
	int j;
	int e;

	j = ft_strlen(s) - 1;
	e = 0;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
	{
		e++;
		j--;
	}
	return (e);
}

char		*ft_strtrim(char const *s)
{
	unsigned long int		b;
	unsigned long int		e;
	int						i;
	char					*ret;

	if (!s)
		return (0);
	b = ft_begin(s);
	if (s[b] == '\0')
		return (ft_strnew(1));
	e = ft_end(s);
	i = 0;
	ret = ft_strnew(ft_strlen(s) - (b + e));
	if (ret == NULL)
		return (0);
	while (b < (ft_strlen(s) - e))
		ret[i++] = s[b++];
	ret[i] = '\0';
	return (ret);
}
