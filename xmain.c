/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/16 15:44:22 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = printf("%%|\n");
	ret2 = ft_printf("%%|\n");
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = printf("%5%|\n");
	ret2 = ft_printf("%5%|\n");
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = printf("%-15%|\n");
	ret2 = ft_printf("%-15%|\n");
	printf("||%d||%d||\n", ret1, ret2);
}
