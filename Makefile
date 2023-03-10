# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <ilasrarf@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 19:06:19 by ilasrarf          #+#    #+#              #
#    Updated: 2023/03/10 20:39:44 by ilasrarf         ###   ########.fr        #
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
		tools/ft_push_b_chank.c \
		tools/ft_final_sort.c \
		tools/ft_cnt_instuct.c \
		tools/ft_puch_too.c \
		tools/ft_get_indx.c \
		tools/ft_sort_3_5.c \
		tools/ft_deja_msorty.c \
		tools/ft_list_funcs2.c \

SRC_O =  ${SRC:.c=.o}

NAME = push_swap
RM = rm -rf
CC = cc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC_O)
	$(CC) $(FLAGS) $(SRC_O) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(SRC_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) re clean fclean