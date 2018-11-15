# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsilva <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 20:31:09 by thsilva           #+#    #+#              #
#    Updated: 2018/11/13 13:41:20 by thsilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
FLAGS = -Wall -Werror -Wextra
INCLUDE = includes
SRCS = srcs/check_rushes.c srcs/check_strings.c srcs/main.c srcs/ft_all_rush.c srcs/lists.c
OBJS = srcs/check_rushes.o srcs/check_strings.o srcs/main.o srcs/ft_all_rush.o srcs/lists.o

all: 
	@gcc -I$(INCLUDE) $(FLAGS) -o $(NAME) $(SRCS) 

clean:
	@rm -f $(OUTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
