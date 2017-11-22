/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:19:30 by mcassar           #+#    #+#             */
/*   Updated: 2017/11/22 13:04:08 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

/*
** LIBFT FUNCTIONS
*/

int					ft_strleni(char *str);

void				ft_putchar(char c);
void				ft_putstr(char *str);

char				*ft_itoa_base(int nb, int base);
char				*ft_j_itoa_base(uintmax_t nb, int base);
char				*ft_lu_itoa_base(unsigned long int nb, int base);
char				*ft_llu_itoa_base(unsigned long long int nb, int base);
char				*ft_s_itoa_base(short int nb, int base);
char				*ft_u_itoa_base(unsigned int nb, int base);

/*
** PRINTF FUNCTIONS
*/

int					ft_are_u_here(char c);
int					ft_howmany(void);
int					ft_is_flag(char c);
int					ft_printf(const char *format, ...);

void				ft_fire(void);
void				ft_printf_percent(void);
void				ft_reload(void);
void				ft_rifle(int n);
void				ft_set_o(void);
void				ft_whattodo(va_list list);

void				ft_printf_c(char c);
void				ft_printf_x(unsigned int n, char x);

void				ft_printf_h(va_list list);
void				ft_printf_hx(int nb);

void				ft_printf_hh(va_list list);
void				ft_printf_hhx(int nb);

void				ft_printf_l(va_list list);
void				ft_printf_lx(unsigned long int nb);

void				ft_printf_ll(va_list list);
void				ft_printf_llx(unsigned long long int nb);

void				ft_printf_j(va_list list);
void				ft_printf_jx(uintmax_t nb);

struct				s_v
{
	const char		*flags;
	const char		*f;
	int				i;
	int				ret;
	char			o;
}					t_v;

#endif
