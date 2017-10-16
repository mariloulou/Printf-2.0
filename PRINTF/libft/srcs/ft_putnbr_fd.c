/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:49:17 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/12 08:12:41 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if (c == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		c = -c;
	}
	if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	else
		ft_putchar_fd(c + '0', fd);
}
