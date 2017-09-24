# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/24 09:06:53 by mcassar           #+#    #+#              #
#    Updated: 2017/09/24 09:43:22 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OPTIONS = -c -Wall -Wextra -Werror

SRCSDIR = srcs/
SRCSLIST = ft_printf.c \

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
	@gcc xmain.c libftprintf.a libft/libft.a
	@./a.out
