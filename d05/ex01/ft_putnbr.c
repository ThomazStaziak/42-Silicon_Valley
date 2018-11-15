/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:10:00 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/30 21:57:00 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb == -987654321)
	{
		ft_putchar('-');
		ft_putnbr(987654321);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		else if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////

void    ft_print_answer(char rush, int rows, int cols, int matches)
{
    if (matches > 0)
        ft_putchar(" || ");
    ft_putchar("[colle-0");
    ft_putchar(rush);
    ft_putchar("] [");
    ft_putnbr(cols);
    ft_putchar("] [");
    ft_putnbr(rows);
    ft_putchar("]");
}



/////////////////////////////////////////////////////////////////////////////////////////////////////

void    find_rush(char *str)
{
    int rows;
    int columns;
    int matches;
    
    matches = 0;
    rows = ft_ct_rows(str);
    columns = ft_ct_columns(str);
    if (ft_strcmp(str, ft_rush00(columns, rows)) == 0)
        ft_print_answer('0', rows, columns, matches++);
    if (ft_strcmp(str, ft_rush01(columns, rows)) == 0)
        ft_print_answer('1', rows, columns, matches++);
    if (ft_strcmp(str, ft_rush02(columns, rows)) == 0)
        ft_print_answer('2', rows, columns, matches++);
    if (ft_strcmp(str, ft_rush03(columns, rows)) == 0)
        ft_print_answer('3', rows, columns, matches++);
    if (ft_strcmp(str, ft_rush04(columns, rows)) == 0)
        ft_print_answer('4', rows, columns, matches++);
    if (matches == 0)
        ft_putchar("aucune");
    ft_putchar("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////

#include "ft_header.h"

#define BUF 4048

int        main(void)
{
    char    input[BUF + 1];
    int     bytes;
    
    bytes = read(0, input, BUF);
    if (bytes == 0)
        return (1);
    input[bytes] = '\0';
    if (check_str(input, rows_counter(input), columns_counter(input)))
        cmp_rushes(input);
    return (0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

int        check_str(char *str, int rows, int cols);
void    cmp_rushes(char *str);
int        rows_counter(char *str);
int        columns_counter(char *str);
int        ft_strcmp(char *s1, char *s2);
void    ft_putchar(char c);
void    ft_putnbr(int nb);
void    ft_print_answer(char rush, int rows, int cols, int first_match);
char    *ft_rush00(int x, int y);
char    *ft_rush01(int x, int y);
char    *ft_rush02(int x, int y);
char    *ft_rush03(int x, int y);
char    *ft_rush04(int x, int y);

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////

NAME = rush-2
FLAG = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRCS = check_rushes.c check_strings.c main.c ft_all_rushes.c
OBJS = check_rushes.o check_strings.o main.o ft_all_rushes.o

all:
    @gcc $(FLAG) $(INCLUDE) $(SRC) -o $(NAME)

clean:
@rm -f $(OUTS)
@rm -f ./bin/$(OUTS)

fclean: clean
@rm -rf ./bin
@rm -f $(NAME)

re: fclean all




















