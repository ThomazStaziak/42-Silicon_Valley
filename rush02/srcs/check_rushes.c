/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rushes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:49:44 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 23:13:12 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
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

void	ft_print(char rush, int rows, int cols, int matches)
{
	if (matches > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putchar(rush);
	ft_putstr("] [");
	ft_putnbr(cols);
	ft_putstr("] [");
	ft_putnbr(rows);
	ft_putstr("]");
}

void	cmp_rushes(char *str)
{
	int	rows;
	int	columns;
	int	matches;

	matches = 0;
	rows = rows_counter(str);
	columns = columns_counter(str);
	if (ft_strcmp(str, rush00(columns, rows)) == 0)
		ft_print('0', rows, columns, matches++);
	if (ft_strcmp(str, rush01(columns, rows)) == 0)
		ft_print('1', rows, columns, matches++);
	if (ft_strcmp(str, rush02(columns, rows)) == 0)
		ft_print('2', rows, columns, matches++);
	if (ft_strcmp(str, rush03(columns, rows)) == 0)
		ft_print('3', rows, columns, matches++);
	if (ft_strcmp(str, rush04(columns, rows)) == 0)
		ft_print('4', rows, columns, matches++);
	if (matches == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}
