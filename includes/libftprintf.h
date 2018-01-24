/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:19:30 by mcassar           #+#    #+#             */
/*   Updated: 2018/01/24 15:34:11 by mcassar          ###   ########.fr       */
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

void				ft_bitoi(char **tab, int nb);
void				ft_l_putnbr(long int c);
void				ft_ll_putnbr(long long int c);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int c);
void				ft_putnstr(char *str, int c);

char				*ft_dectoby(int c);
char				*ft_itoa_base(int nb, int base);
char				*ft_j_itoa_base(uintmax_t nb, int base);
char				*ft_ll_itoa_base(long long int nb, int base);
char				*ft_lu_itoa_base(unsigned long int nb, int base);
char				*ft_llu_itoa_base(unsigned long long int nb, int base);
char				*ft_s_itoa_base(short int nb, int base);
char				*ft_strdup(const char *s1);
char				*ft_u_itoa_base(unsigned int nb, int base);

size_t				ft_strlen(const char *s);

/*
** PRINTF FUNCTIONS
*/

int					ft_are_u_here(char c);
int					ft_howmany(void);
int					ft_is_flag(char c);
int					ft_precision(void);
int					ft_printf(const char *format, ...);

void				ft_fire(void);
void				ft_hashtag(char c);
void				ft_printf_percent(void);
void				ft_reload(void);
void				ft_rifle(int n);
void				ft_set_o(void);
void				ft_whattodo(va_list list);

void				ft_printf_c(char c);
void				ft_printf_d(int n);
void				ft_printf_o(unsigned int n);
void				ft_printf_p(unsigned int n);
void				ft_printf_s(char *str);
void				ft_printf_x(unsigned int n, char c);

void				ft_printf_h(va_list list);
void				ft_printf_hd(int nb);
void				ft_printf_hx(int nb);

void				ft_printf_hh(va_list list);
void				ft_printf_hhd(int nb);
void				ft_printf_hhx(int nb);

void				ft_printf_j(va_list list);
void				ft_printf_jd(uintmax_t nb);
void				ft_printf_jx(uintmax_t nb);

void				ft_printf_l(va_list list);
void				ft_printf_lc(wchar_t c);
void				ft_printf_ld(long int nb);
void				ft_printf_ls(wchar_t *str);
void				ft_printf_lx(unsigned long int nb);

void				ft_printf_ll(va_list list);
void				ft_printf_lld(long long int nb);
void				ft_printf_llx(unsigned long long int nb, char c);

void				ft_printf_zd(size_t nb);

struct				s_v
{
	const char		*flags;
	const char		*f;
	int				i;
	int				ret;
	char			o;
}					t_v;

#endif
