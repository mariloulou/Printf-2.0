# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/24 09:06:53 by mcassar           #+#    #+#              #
#    Updated: 2017/11/16 14:26:00 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OPTIONS = -c -Wall -Wextra -Werror

SRCSDIR = srcs/
SRCSLIST = ft_forflags.c \
		   ft_printf.c \
		   ft_printf_c.c \
		   ft_printf_percent.c \
		   ft_shotgun.c \
		   ft_whattodo.c \
		   ft_putchar.c \

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

exe: all
	@echo "-----FT_PRINTF----"
	@gcc xmain.c libftprintf.a
	@./a.out
