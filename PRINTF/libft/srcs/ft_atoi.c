/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 11:31:02 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/16 09:02:29 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		FT_ATOI
**		The atoi function converts the intial portion of the string
**			pointed to by str, to int reprensetation.
**		int n = A save for negative number.
**		int ret = The returned int representation.
*/

int	ft_atoi(char *str)
{
	int n;
	int ret;

	ret = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
	{
		str++;
		if (*str == '+' || *str == '-')
			return (0);
	}
	if (*str == '-')
	{
		n = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret = (ret * 10) + (*str - 48);
		str++;
	}
	if (n == 1)
		return (-ret);
	return (ret);
}
