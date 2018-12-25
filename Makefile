# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/21 20:01:04 by amerlon-          #+#    #+#              #
#    Updated: 2018/12/25 12:41:56 by cfahey           ###   ########.fr        #
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

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJS) -o $(NAME) libft/libft.a

$(OBJS): %.o: %.c
	gcc $(FLAGS) -c $< -Itrio.h -Ifillit.h -Imap.h -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(INCLUDES) $(SRCS)

.PHONY: all clean fclean re