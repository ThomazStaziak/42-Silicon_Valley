/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rushes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:20:34 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 23:14:04 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

int	check_str(int rows, int columns, char *str)
{
	int row;
	int column;

	row = 0;
	while (*str)
	{
		column = 0;
		while (column++ < columns && *str)
			str++;
		if (*str != '\n')
		{
			ft_putstr("aucune\n");
			return (0);
		}
		row++;
		str++;
	}
	if (row < rows)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	return (1);
}

int	rows_counter(char *str)
{
	int	rows;

	rows = 0;
	while (*str)
	{
		if (*str == '\n')
			rows++;
		str++;
	}
	return (rows);
}

int	columns_counter(char *str)
{
	int	columns;

	columns = 0;
	while (*str != '\n' && *str)
	{
		str++;
		columns++;
	}
	return (columns);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != '\0')
		return (*s1);
	else if (*s2 != '\0')
		return (-*s2);
	else
		return (0);
}
