/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:37:46 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/11 11:02:43 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	unsigned long int		j;
	char					*s2;

	j = 0;
	s2 = (char *)malloc(sizeof(char) * (n + 1));
	if (!s2)
		return (NULL);
	while (j < n)
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
