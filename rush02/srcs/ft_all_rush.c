/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_rush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:32:15 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 19:18:42 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*rush00(int x, int y)
{
	char	*result;
	int		i;
	int		column;
	int		row;

	column = 1;
	row = 1;
	i = 0;
	result = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (column <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((column == 1 && row == 1) || (column == 1 && row == x))
				result[i++] = 'o';
			else if ((column > 1 && column < y) && (row > 1 && row < x))
				result[i++] = ' ';
			else if ((column == y && row == 1) || (column == y && row == x))
				result[i++] = 'o';
			else if ((column == y || column == 1) && (row > 1 && row < x))
				result[i++] = '-';
			else
				result[i++] = '|';
			row++;
		}
		result[i++] = '\n';
		column++;
	}
	result[i] = '\0';
	return (result);
}

char	*rush01(int x, int y)
{
	char	*result;
	int		i;
	int		column;
	int		row;

	column = 1;
	row = 1;
	i = 0;
	result = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (column <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((column == 1 && row == 1) || (column == y && row == x))
				result[i++] = '/';
			else if ((column > 1 && column < y) && (row > 1 && row < x))
				result[i++] = ' ';
			else if ((column == 1 && row == x) || (column == y && row == 1))
				result[i++] = '\\';
			else if ((column == y || column == 1) && (row > 1 && row < x))
				result[i++] = '*';
			else
				result[i++] = '*';
			row++;
		}
		result[i++] = '\n';
		column++;
	}
	result[i] = '\0';
	return (result);
}

char	*rush02(int x, int y)
{
	char	*result;
	int		i;
	int		column;
	int		row;

	column = 1;
	row = 1;
	i = 0;
	result = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (column <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((column == 1 && row == 1) || (column == 1 && row == x))
				result[i++] = 'A';
			else if ((column > 1 && column < y) && (row > 1 && row < x))
				result[i++] = ' ';
			else if ((column == y && row == 1) || (column == y && row == x))
				result[i++] = 'C';
			else if ((column == y || column == 1) && (row > 1 && row < x))
				result[i++] = 'B';
			else
				result[i++] = 'B';
			row++;
		}
		result[i++] = '\n';
		column++;
	}
	result[i] = '\0';
	return (result);
}

char	*rush03(int x, int y)
{
	char	*result;
	int		i;
	int		column;
	int		row;

	column = 1;
	row = 1;
	i = 0;
	result = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (column <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((column == 1 && row == 1) || (column == y && row == 1))
				result[i++] = 'A';
			else if ((column > 1 && column < y) && (row > 1 && row < x))
				result[i++] = ' ';
			else if ((column == 1 && row == x) || (column == y && row == x))
				result[i++] = 'C';
			else if ((column == y || column == 1) && (row > 1 && row < x))
				result[i++] = 'B';
			else
				result[i++] = 'B';
			row++;
		}
		result[i++] = '\n';
		column++;
	}
	result[i] = '\0';
	return (result);
}

char	*rush04(int x, int y)
{
	char	*result;
	int		i;
	int		column;
	int		row;

	column = 1;
	row = 1;
	i = 0;
	result = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (column <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((column == 1 && row == 1) || (column == y && row == x))
				result[i++] = 'A';
			else if ((column > 1 && column < y) && (row > 1 && row < x))
				result[i++] = ' ';
			else if ((column == y && row == 1) || (column == 1 && row == x))
				result[i++] = 'C';
			else if ((column == y || column == 1) && (row > 1 && row < x))
				result[i++] = 'B';
			else
				result[i++] = 'B';
			row++;
		}
		result[i++] = '\n';
		column++;
	}
	result[i] = '\0';
	return (result);
}
