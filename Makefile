# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/24 09:06:53 by mcassar           #+#    #+#              #
#    Updated: 2018/01/29 16:08:20 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OPTIONS = -c -Wall -Wextra -Werror

SRCSDIR = srcs/
SRCSLIST = ft_bitoi.c \
		   ft_dectoby.c \
   		   ft_forflags.c \
		   ft_itoa_base.c \
		   ft_j_itoa_base.c \
		   ft_l_putnbr.c \
		   ft_ll_putnbr.c \
		   ft_ll_itoa_base.c \
		   ft_lu_itoa_base.c \
		   ft_llu_itoa_base.c \
		   ft_parsing.c \
		   ft_precision.c \
		   ft_printf.c \
		   ft_printf_c.c \
		   ft_printf_d.c \
		   ft_printf_h.c \
		   ft_printf_hd.c \
		   ft_printf_hh.c \
		   ft_printf_hhd.c \
		   ft_printf_hho.c\
		   ft_printf_ho.c \
		   ft_printf_j.c \
		   ft_printf_jd.c \
		   ft_printf_jo.c \
		   ft_printf_l.c \
		   ft_printf_lc.c \
		   ft_printf_ld.c \
		   ft_printf_ll.c \
		   ft_printf_lld.c \
		   ft_printf_llo.c \
		   ft_printf_lo.c \
		   ft_printf_ls.c \
		   ft_printf_o.c \
		   ft_printf_p.c \
		   ft_printf_percent.c \
		   ft_printf_s.c \
		   ft_printf_u.c \
		   ft_printf_x.c \
		   ft_printf_z.c \
		   ft_printf_zd.c \
		   ft_printf_zo.c \
		   ft_putchar.c \
		   ft_putnbr.c \
		   ft_s_itoa_base.c \
		   ft_shotgun.c \
		   ft_strdup.c \
		   ft_strlen.c \
		   ft_strleni.c \
		   ft_u_itoa_base.c \
		   ft_whattodo.c \

SRCS = $(addprefix $(SRCSDIR), $(SRCSLIST))

OBJSDIR = objs/
OBJSLIST = $(patsubst %.c, %.o, $(SRCSLIST))
OBJS = $(addprefix $(OBJSDIR), $(OBJSLIST))

all: $(NAME)

$(NAME):
	@make -C libft/ re
	@gcc $(OPTIONS) $(SRCS)
	@mkdir objs
	@mv *.o objs
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@make -C libft/ clean
	@/bin/rm -rf objs

fclean: clean
	@/bin/rm -rf $(NAME)
	@/bin/rm -rf libft/libft.a

re: fclean all

exe:
	@make -C libft/ clean
	@/bin/rm -rf objs
	@/bin/rm -rf $(NAME)
	@/bin/rm -rf libft/libft.a
	@make -C libft/ re
	@gcc $(OPTIONS) $(SRCS)
	@mkdir objs
	@mv *.o objs
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "-----FT_PRINTF----"
	@gcc xmain.c libftprintf.a
	@./a.out
