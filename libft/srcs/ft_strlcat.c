/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 08:32:42 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 09:47:05 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		save;

	i = ft_strlen(dst);
	j = 0;
	save = ft_strlen(dst);
	if (*src == '\0')
		return (size);
	if (i >= size)
		return (size + ft_strlen(src));
	while (i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (dst > 0)
		return (save + ft_strlen(src));
	return (0);
}
