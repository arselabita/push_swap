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
CFLAGS = -Wall -Wextra -Werror -Iinclude -Ilibft -g
RM = rm -f
MAKE = make

# executable name
NAME = push_swap
LIBFT = libft/libft.a

# directories
SRC_DIR = src
OBJ_DIR = build

# source to object files
SRCS = $(SRC_DIR)/main.c \
	   $(SRC_DIR)/operations.c \
	   $(SRC_DIR)/parser.c \
	   $(SRC_DIR)/push.c \
	   $(SRC_DIR)/push_swap.c \
	   $(SRC_DIR)/radix_sort.c \
	   $(SRC_DIR)/radix_utils.c \
	   $(SRC_DIR)/reverse_rotate.c \
	   $(SRC_DIR)/rotate.c \
	   $(SRC_DIR)/stack.c \
	   $(SRC_DIR)/swap.c \
	   $(SRC_DIR)/utils.c
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# rules
all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C libft

clean:
	$(RM) $(OBJS)
	$(MAKE) -C libft clean

fclean: clean 
	$(RM) $(NAME)
	$(MAKE) -C libft fclean
	rm -r $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re
.SILENT: 
