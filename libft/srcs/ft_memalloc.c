/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:49:56 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/16 08:57:56 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**		FT_MEMALLOC
**		The ft_memalloc function allocate with malloc(3) and return a
**			"fresh memory zone" initialized at zero.
**		- char *s1	= string taking the value of (char *)s2, for easy handeling.
**		- void *s2	= malloced void zone.
**		- size_t i	= Index used to set every character of s1 at zero.
*/

void	*ft_memalloc(size_t size)
{
	char	*s1;
	void	*s2;
	size_t	i;

	i = 0;
	s2 = (void *)malloc(sizeof(*s1) * size);
	if (s2 == NULL)
		return (0);
	s1 = (char *)s2;
	while (i < size)
	{
		s1[i] = 0;
		i++;
	}
	return (s1);
}
