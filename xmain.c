/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/23 15:02:05 by mcassar          ###   ########.fr       */
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
	ret1 = ft_printf("%ls|\n", L"꿀벌");
	ret2 = printf("%ls|\n", L"꿀벌");
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = ft_printf("%lc|\n", L'꿀');
	ret2 = printf("%lc|\n", L'꿀');
	printf("||%d||%d||\n", ret1, ret2);
}
