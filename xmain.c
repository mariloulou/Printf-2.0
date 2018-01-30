/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/30 15:57:11 by mcassar          ###   ########.fr       */
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
	ret1 = ft_printf("%     d|\n", 42);
	ret2 = printf("%     d|\n", 42);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("% d|\n", 42);
	ret2 = printf("% d|\n", 42);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%|\n");
	ret2 = printf("%|\n");
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("% |\n");
	ret2 = printf("% |\n");
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("% h|\n");
	ret2 = printf("% h|\n");
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%Z|\n");
	ret2 = printf("%Z|\n");
	printf("||%d||%d||\n", ret1, ret2);
}
