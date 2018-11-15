/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osfally <osfally@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 17:16:19 by osfally           #+#    #+#             */
/*   Updated: 2018/11/03 18:49:56 by osfally          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	printSudoku(int	argc, int **sudoku)
{
	int		i;
	int		j;
	int		argsss;
	int		printable;

	argsss = argc;
	i = 0;
	while (argsss != 1)
	{
		j = 0;
		while (sudoku[i][j] != '\0')
		{
			printable = sudoku[i][j] + 48;
			write(1, &printable, 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		argsss--;
	}
}

void	fillSudoku(int argc, char **argv, int **sudoku)
{
	int		i;
	int		j;
	int		argsss;

	argsss = argc;
	i = 0;
	sudoku = (int**)malloc(sizeof(int*) * 9);
	while (argsss != 1)
	{
		j = 0;
		sudoku[i] = (int*)malloc(sizeof(int*) * 9);
		while (argv[i + 1] != '\0')
			{
				if (argv[i + 1][j] == '.')
					sudoku[i][j] = 0;
				else
					sudoku[i][j] = argv[i + 1][j] - 48;
				j++;
			}
		i++;
		argsss--;
	}
}


int		main(int argc, char **argv)
{
	int		**sudoku;
	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	fillSudoku(argc, argv, sudoku);
	printSudoku(argc, sudoku);
	return (0);
}
