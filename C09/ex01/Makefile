# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: layang <layang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 17:28:45 by layang            #+#    #+#              #
#    Updated: 2024/09/23 18:58:20 by layang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ------Definitions------ ##
# Folders and objects
SRCS_DIR = ./srcs/
INC_DIR = ./includes/
SRCS = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_swap.c $(SRCS_DIR)/ft_putstr.c \
	$(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
INC = $(INC_DIR)ft.h

# Compiler and options
CC = cc
CFLAGS = -Wall -Wextra -Werror -c

# Library name
NAME = libft.a
AR = ar -rc
RANLIB = ranlib

## ------Rules------ ##
# Default rule
all: $(NAME)

# Create library file
$(NAME): $(OBJS)
	$(AR) $@ $^
	$(RANLIB) $@

# Compile source files to object files
$(OBJS): $(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(INC)
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ $<

# Clean temporary files
clean:
	rm -f $(OBJS)

# Clean all binary files
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

.PHONY: all clean fclean re
