/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 09:55:39 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 14:19:54 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		FT_BZERO
**		The ft_bzero function writes n zeroes bytes to the string s.
**			If n is zero, ft_bzero does nothing.
*/

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
