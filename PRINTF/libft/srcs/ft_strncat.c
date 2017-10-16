/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 08:22:40 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 09:40:56 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

static char	*ft_emptys1(char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	if (ft_strlen(s2) == 0)
		return (s1);
	if (ft_strlen(s1) == 0)
		return (ft_emptys1(s1, s2, n));
	i = ft_strlen(s1);
	j = 0;
	while (s2[j] && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
