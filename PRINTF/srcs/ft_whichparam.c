/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichparam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 01:13:43 by mcassar           #+#    #+#             */
/*   Updated: 2017/05/19 03:11:12 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_whichparam(char *format)
{
	int i;
	int j;

	i = 0;
	while (format[i] == '#' || format[i] == '0' || format[i] == ' ' ||
			format[i] == '+')
		i++;
	t_v.params = (char *)malloc(sizeof(char *) * i + 1);
	if (t_v.params == NULL)
		return ;
	j = 0;
	while (j < i)
	{
		t_v.params[j] = format[j];
		j++;
	}
	t_v.params[j] = '\0';
	return ;
}
