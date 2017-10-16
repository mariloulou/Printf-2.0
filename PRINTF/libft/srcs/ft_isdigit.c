/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:45:40 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/13 14:33:35 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		FT_ISDIGIT
**		The ft_isdigit function tests for a decimal digit character.
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
