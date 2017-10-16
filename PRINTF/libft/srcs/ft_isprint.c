/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:55:07 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 14:31:40 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		FT_ISPRINT
**		The ft_isprint function tests for any printing character,
**			including space (' ').
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
