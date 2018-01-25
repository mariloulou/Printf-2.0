/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/25 13:58:49 by mcassar          ###   ########.fr       */
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
	ret1 = ft_printf("%zd|\n", -1);
	ret2 = printf("%zd|\n", -1);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%o|\n", 15000);
	ret2 = printf("%o|\n", 15000);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%zo|\n", 15000);
	ret2 = printf("%zo|\n", 15000);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%zo|\n", -5559999992147483648);
	ret2 = printf("%zo|\n", -5559999992147483648);
	printf("||%d||%d||\n", ret1, ret2);
}
