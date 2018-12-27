# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/21 20:01:04 by amerlon-          #+#    #+#              #
#    Updated: 2018/12/27 04:12:38 by amerlon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Werror -Wextra -g
SRCS = main.c \
		reader.c \
		solver.c \
		validation.c \
		translate.c \
		trio.c \
		map.c
OBJS = $(SRCS:.c=.o)
INCLUDES = fillit.h \
			trio.h \
			map.h
LIBFT = libft/libft.a

all: $(NAME)

$(OBJS): %.o: %.c
	@gcc $(FLAGS) -c $< -I. -o $@

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJS)
	@gcc $(FLAGS) $(OBJS) -o $(NAME) $(LIBFT)
	@echo "\033[31mCompiled Executable\033[0m"

clean:
	@rm -f $(OBJS)
	@make -C libft clean
	@echo "\033[31mRemoved Object Files\033[0m"

fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean
	@echo "\033[31mRemoved Executable\033[0m"

re: fclean all

norm:
	norminette $(INCLUDES) $(SRCS)

.PHONY: all clean fclean re norm