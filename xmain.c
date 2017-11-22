/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/22 13:15:26 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = printf("%jx|\n", 4294967296);
	ret2 = ft_printf("%jx|\n", 4294967296);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = printf("%jx|\n", 4294967295);
	ret2 = ft_printf("%jx|\n", 4294967295);
	printf("||%d||%d||\n", ret1, ret2);
}
