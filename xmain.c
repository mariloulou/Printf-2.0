/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/04 13:29:56 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = printf("@moulitest: %.o|\n", 0);
	ret2 = ft_printf("@moulitest: %.o|\n", 0);
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = printf("@moulitest : %o %0o|\n", 0, 0);
	ret2 = ft_printf("@moulitest : %o %0o|\n", 0, 0);
	printf("||%d||%d||\n", ret1, ret2);
}
