# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 19:06:19 by ilasrarf          #+#    #+#              #
#    Updated: 2023/03/01 17:57:52 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	push_swap.c \
 		tools/ft_char_error_char.c \
		tools/ft_strjoin.c \
		tools/ft_strlen.c \
		tools/ft_atoi.c \
		tools/ft_strdup.c \
		tools/ft_split.c \
		tools/ft_calloc.c \
		tools/ft_substr.c \
		tools/ft_bzero.c \
		tools/ft_memset.c \
		tools/ft_list_funcs.c \
		tools/ft_index_list.c \
		tools/ft_free.c \
		tools/rules_base.c \
		tools/instraction1.c \
		tools/instraction2.c \
		tools/instraction3.c \
		

SRC_O =  ${SRC:.c=.o}

NAME = push_swap
RM = rm -rf
CC = cc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

# debug: $(SRC_O)
# 	$(CC) -g $(FLAGS) $(SRC_O) -o $(NAME) && lldb $(NAME)

$(NAME): $(SRC_O) push_swap.h
	$(CC) $(FLAGS) $(SRC_O) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(SRC_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) re clean fclean