/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/17 14:49:25 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = printf("%X|\n", -42);
	ret2 = ft_printf("%X|\n", -42);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = printf("%x|\n", 42);
	ret2 = ft_printf("%x|\n", 42);
	printf("||%d||%d||\n", ret1, ret2);
}
