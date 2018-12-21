# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/21 20:01:04 by amerlon-          #+#    #+#              #
#    Updated: 2018/12/21 21:01:53 by amerlon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Werror -Wextra
SRCS = main.c \
		reader.c \
		solver.c
OBJS = $(SRCS:.c=.o)
INCLUDES = fillit.h

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJS) -o $(NAME) libft/libft.a

$(OBJS): %.o: %.c
	gcc $(FLAGS) -c $< -I$(INCLUDES) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(INCLUDES) $(SRCS)

.PHONY: all clean fclean re