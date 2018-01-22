/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/22 16:04:21 by mcassar          ###   ########.fr       */
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

	ret2 = ft_printf("%x|\n", 42);
	ret1 = printf("%x|\n", 42);
	printf("||%d||%d||\n", ret1, ret2);
	ret2 = ft_printf("%#x|\n", 42);
	ret1 = printf("%#x|\n", 42);
	printf("||%d||%d||\n", ret1, ret2);
	ret2 = ft_printf("%p|\n", 42);
	ret1 = printf("%p|\n", 42);
	printf("||%d||%d||\n", ret1, ret2);
}
