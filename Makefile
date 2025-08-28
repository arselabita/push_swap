# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abita <abita@student.42vienna.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 12:20:50 by abita             #+#    #+#              #
#    Updated: 2025/08/11 12:21:20 by abita            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# the compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address,leak,undefined -g3

# executable name
NAME = push_swap
LIBFT = libft/libft.a
# source to object files
CFILES = \
	main.c \
	parse_arguments.c \
	init_stack.c

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OFILES) $(LIBS) $(LIBFT)

$(LIBFT):
	make -C libft

clean:
	rm -f $(OFILES)
	make -C libft clean

fclean: clean 
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
