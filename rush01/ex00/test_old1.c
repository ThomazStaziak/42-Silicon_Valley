#include <unistd.h>
#include <stdio.h>

#define SIZE 9

int entire_box[9][9] = {
    {9,0,0,0,7,0,0,0,0},
    {2,0,0,0,9,0,0,5,3},
    {0,6,0,0,1,2,4,0,0},
    {8,4,0,0,0,1,0,9,0},
    {5,0,0,0,0,0,8,0,0},
    {0,3,1,0,0,4,0,0,0},
    {0,0,3,7,0,0,6,8,0},
    {0,9,0,0,5,0,7,4,1},
    {4,7,0,0,0,0,0,0,0}
};

void ft_print_sudoku()
{
    int i;
	int j;

	i = 0;
	j = 0;
    while (i < SIZE)
    {
		j = 0;
        while (j < SIZE)
        {
            printf("%d ", entire_box[i][j]);
			j++;
        }
        printf("\n");
		i++;
    }
}

int ft_number_empty(int *row, int *col)
{
    int empty_num;
    int i;
	int	j;

	empty_num = 0;
	i = 0;
	j = 0;
   while (i < SIZE)
   {
	   j = 0;
       while (j < SIZE)
       {
			if(entire_box[i][j] == 0)
            {
                *row = i;
                *col = j;
                empty_num = 1;
                return (empty_num);
           	}
			j++;
		}
		i++;
   }
   return (empty_num);
}

int ft_is_safe(int num, int row, int col)
{
    int i;
	int	j;
    int row_start;
    int col_start;

	i = 0;
	j = 0;
	col_start = (col/3)*3;
	row_start = (row/3)*3;
    while (i < SIZE)
   {
        if(entire_box[row][i] == num)
            return (0);
		i++;
    }
	i = 0;
    while (i < SIZE)
    {
        if(entire_box[i][col] == num)
            return (0);
    }
	i = row_start;
	j = col_start;
   while (i < row_start + 3)
    {
		j = col_start;
        while (j < col_start + 3)
        {
            if(entire_box[i][j]==num)
                return (0);
			j++;
        }
		i++;
    }
    return (1);
}

int solve_sudoku()
{
    int row;
    int col;
    int n;
	int	i;

	i = 1;
   if(ft_number_empty(&row, &col) == 0)
        return (1);
    while (i <= SIZE)
    {
        if(ft_is_safe(i, row, col))
        {
            entire_box[row][col] = i;
            if(solve_sudoku())
                return (1);
            entire_box[row][col]=0;
        }
		i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
//	if (argc != 10)
//		write(1, "Error\n", 7);
    if (solve_sudoku())
        ft_print_sudoku();
    else
        write(1, "No solution\n", 13);
    ft_print_sudoku();
	return (0);
}
