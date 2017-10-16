/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 09:13:23 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 09:32:01 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		save;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			save = i;
			while (big[i] == little[j++] && i < len)
			{
				if (little[j] == '\0')
					return ((char *)big + save);
				i++;
			}
			i = save + 1;
			j = 0;
		}
		i++;
	}
	return (0);
}
