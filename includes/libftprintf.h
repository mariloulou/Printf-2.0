/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:19:30 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/16 15:40:25 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>

/*
** LIBFT FUNCTIONS
*/

void				ft_putchar(char c);

/*
** PRINTF FUNCTIONS
*/

int					ft_are_u_here(char c);
int					ft_howmany(void);
int					ft_is_flag(char c);
int					ft_printf(const char *format, ...);

void				ft_fire(void);
void				ft_printf_c(char c);
void				ft_printf_percent(void);
void				ft_reload(void);
void				ft_rifle(int n);
void				ft_set_o(void);
void				ft_whattodo(va_list list);

struct				s_v
{
	const char		*flags;
	const char		*f;
	int				i;
	int				ret;
	char			o;
}					t_v;

#endif
