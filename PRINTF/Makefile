# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <marvin42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 08:03:35 by mcassar           #+#    #+#              #
#    Updated: 2017/09/18 09:51:26 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OPTIONS = -c -Wall -Wextra -Werror
SRCSDIR = srcs/
SRCSLIST =	ft_printf.c \
			ft_printf_c.c \
			ft_printf_c_maj.c \
			ft_printf_d.c \
			ft_printf_d_maj.c \
			ft_printf_ld.c \
			ft_printf_lld.c \
			ft_printf_o.c \
			ft_printf_o_maj.c \
			ft_printf_p.c \
			ft_printf_s.c \
			ft_printf_s_maj.c \
			ft_printf_u.c \
			ft_printf_u_maj.c \
			ft_printf_x.c \
			ft_printf_x_maj.c \
			ft_strfind.c \
			ft_u_itoa.c \
			ft_whattodo.c \
			ft_whattodo_maj.c \
			ft_whichflag.c \
			ft_whichparam.c
SRCS = $(addprefix $(SRCSDIR), $(SRCSLIST))
OBJSLIST = $(patsubst %.c, %.o, $(SRCSLIST))
OBJSDIR = objs/
OBJS = $(addprefix $(OBJSDIR), $(OBJSLIST))

all: $(NAME)

$(NAME):
	@printf Make;
	@sleep 0.2;
	@printf .;
	@sleep 0.2;
	@printf .;
	@sleep 0.2;
	@printf .;
	@make -C libft/ re
	@gcc $(OPTIONS) $(SRCS)
	@mkdir objs
	@mv *.o objs
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@printf Done !;


clean:
	@rm -rf objs
	@make -C libft/ clean


fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re
