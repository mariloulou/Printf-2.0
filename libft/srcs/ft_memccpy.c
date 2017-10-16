/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 09:01:01 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/16 09:02:07 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**		FT_MEMCCPY
**		The ft_memcpy function copies 'n' bytes from string src to string dst.
**		- unsigned int i	= used as index.
**		- char *s			= Has (const void *)src value, for easy access.
**		- unsigned char *d	= Return value for dst.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*s;
	unsigned char	*d;

	i = 0;
	d = dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
