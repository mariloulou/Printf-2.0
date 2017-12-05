# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/24 09:06:53 by mcassar           #+#    #+#              #
#    Updated: 2017/12/05 15:11:10 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OPTIONS = -c -Wall -Wextra -Werror

SRCSDIR = srcs/
SRCSLIST = ft_forflags.c \
		   ft_itoa_base.c \
		   ft_j_itoa_base.c \
		   ft_lu_itoa_base.c \
		   ft_llu_itoa_base.c \
		   ft_parsing.c \
		   ft_precision.c \
		   ft_printf.c \
		   ft_printf_c.c \
		   ft_printf_h.c \
		   ft_printf_hh.c \
		   ft_printf_hx.c \
		   ft_printf_hhx.c \
		   ft_printf_j.c \
		   ft_printf_jx.c \
		   ft_printf_l.c \
		   ft_printf_ll.c \
		   ft_printf_llx.c \
		   ft_printf_lx.c \
		   ft_printf_o.c \
		   ft_printf_percent.c \
		   ft_printf_s.c \
		   ft_printf_x.c \
		   ft_putchar.c \
		   ft_s_itoa_base.c \
		   ft_shotgun.c \
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
