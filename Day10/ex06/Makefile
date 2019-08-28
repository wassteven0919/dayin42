# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chuchang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 13:49:18 by chuchang          #+#    #+#              #
#    Updated: 2019/08/25 20:05:01 by chuchang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = do-op

SRC = pr.c main.c err.c cal.c ft_atoi.c
OBJ = pr.o main.o err.o cal.o ft_atoi.o

HEADER = header.h

FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f pr.o main.o err.o cal.o ft_atoi.o header.h.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean 
	all
