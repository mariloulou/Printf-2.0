/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 18:23:06 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/18 08:28:45 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <stdio.h>

char	*ft_itoa_base(int nb, int base);
char	*ft_u_itoa(int nbr, int base);

int		ft_printf(const char *format, ...);
int		ft_strfind(char *str, char c);
void	ft_printf_c(void);
void	ft_printf_c_maj(void);
void	ft_printf_d(void);
void	ft_printf_d_maj(void);
void	ft_printf_ld(void);
void	ft_printf_lld(void);
void	ft_printf_o(void);
void	ft_printf_o_maj(void);
void	ft_printf_p(void);
void	ft_printf_s(void);
void	ft_printf_s_maj(void);
void	ft_printf_u(void);
void	ft_printf_u_maj(void);
void	ft_printf_x(void);
void	ft_printf_x_maj(void);
void	ft_whattodo(char *format, va_list list);
void	ft_whattodo_maj(va_list list);
void	ft_whichflag(char *format);
void	ft_whichparam(char *format);

struct	s_v
{
	int				d;
	int				dmaj;
	int				i;
	int				o;
	int				omaj;
	int				u;
	int				umaj;
	int				x;
	int				xmaj;
	long int		ld;
	long long int	lld;
	char			c;
	char			*flag;
	char			*params;
	char			*s;
	void			*p;
	wchar_t			cmaj;
	wchar_t			*smaj;
}		t_v;

#endif
