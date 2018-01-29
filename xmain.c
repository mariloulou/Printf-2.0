/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/29 14:47:12 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/libftprintf.h"
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int	main(void)
{
	int ret1;
	int ret2;

	setlocale(LC_ALL, "");
	ret1 = ft_printf("%-15u|\n", 42);
	ret2 = printf("%-15u|\n", 42);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%.10u|\n", -42);
	ret2 = printf("%.10u|\n", -42);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%5.15u|\n", 9223372036854775807);
	ret2 = printf("%5.15u|\n", 9223372036854775807);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%15.5u|\n", 0);
	ret2 = printf("%15.5u|\n", 0);
	printf("||%d||%d||\n", ret1, ret2);
}
