# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsilva <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 16:06:40 by thsilva           #+#    #+#              #
#    Updated: 2018/11/05 22:43:30 by thsilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER_FOLDER = includes
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Werror -Wextra
LIB_NAME = libft.a

all:
	gcc -I$(HEADER_FOLDER) $(FLAGS) -c $(SRC)	
	ar rc $(LIB_NAME) $(OBJS)
	ranlib $(LIB_NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
