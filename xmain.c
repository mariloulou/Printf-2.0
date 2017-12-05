/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/05 15:07:26 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int ret1;
	int ret2;

	ret2 = ft_printf("%-5o|\n", 2500);
	ret1 = printf("%-5o|\n", 2500);
	printf("||%d||%d||\n", ret1, ret2);
	ret2 = ft_printf("%-#6o|\n", 2500);
	ret1 = printf("%-#6o|\n", 2500);
	printf("||%d||%d||\n", ret1, ret2);
	ret2 = ft_printf("%-10.5o|\n", 2500);
	ret1 = printf("%-10.5o|\n", 2500);
	printf("||%d||%d||\n", ret1, ret2);
	ret2 = ft_printf("@moulitest : %.o %.0o|\n", 0, 0);
	ret1 = printf("@moulitest : %.o %.0o|\n", 0, 0);
	printf("||%d||%d||\n", ret1, ret2);
	ret2 = ft_printf("@moulitest : %5.o %5.0o|\n", 0, 0);
	ret1 = printf("@moulitest : %5.o %5.0o|\n", 0, 0);
	printf("||%d||%d||\n", ret1, ret2);
}
