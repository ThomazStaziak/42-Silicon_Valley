# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsilva <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 22:38:23 by thsilva           #+#    #+#              #
#    Updated: 2018/11/06 14:35:47 by thsilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/program.c srcs/ft_atoi.c srcs/ft_sub.c srcs/ft_sum.c srcs/ft_mul.c srcs/ft_div.c srcs/ft_mod.c srcs/ft_putchar.c
PROGRAM = do-op
HEADER_FOLDER = includes

all:
	gcc -I$(HEADER_FOLDER) -o $(PROGRAM) $(SRCS)

clean:
	rm -f $(PROGRAM)

re: clean all
