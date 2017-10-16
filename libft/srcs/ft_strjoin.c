/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:14:54 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/12 08:11:49 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	char	*ret;

	j = 0;
	if (!s1 || !s2)
		return (0);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (ret == NULL)
		return (0);
	while (*s1)
		ret[j++] = *s1++;
	while (*s2)
		ret[j++] = *s2++;
	ret[j] = '\0';
	return (ret);
}
