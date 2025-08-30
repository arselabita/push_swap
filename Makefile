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
RM = rm -f
MAKE_C = make -C
# executable name
NAME = push_swap
LIBFT = libft/libft.a
# source to object files
CFILES = \
	src/main.c \
	src/parse_arguments.c \
	src/init_stack.c

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OFILES) $(LIBS) $(LIBFT)

$(LIBFT):
	$(MAKE_C) libft

clean:
	$(RM) $(OFILES)
	$(MAKE_C) libft clean

fclean: clean 
	$(RM) $(NAME)
	$(MAKE_C) libft fclean

re: fclean all

.PHONY: all clean fclean re
.SILENT: