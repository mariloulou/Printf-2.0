/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 11:07:15 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/12 08:09:51 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int savei;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[j])
		{
			savei = i;
			while (big[i++] == little[j++])
				if (little[j] == '\0')
					return ((char *)big + savei);
			j = 0;
			i = savei + 1;
		}
		i++;
	}
	return (0);
}
