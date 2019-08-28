# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chuchang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 19:55:17 by chuchang          #+#    #+#              #
#    Updated: 2019/08/20 20:44:54 by chuchang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = ft_advanced_do-op

SRC = pr.c main.c err.c cal.c ft_atoi.c
OBJ = pr.o main.o err.o cal.o ft_atoi.o

HEADER = header.h ft_opp.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -c $(CFLAGS) $(SRC)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f pr.o main.o err.o cal.o ft_atoi.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
