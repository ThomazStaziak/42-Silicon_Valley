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
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            printf("%d ", entire_box[i][j]);
        }
        printf("\n");
    }
}

int ft_number_empty(int *row, int *col)
{
    int empty_num = 0;
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if(entire_box[i][j] == 0)
            {
                *row = i;
                *col = j;
                empty_num = 1;
                return empty_num;
            }
        }
    }
    return empty_num;
}

int ft_is_safe(int num, int row, int col)
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        if(entire_box[row][i] == num)
            return 0;
    }
    for(i=0;i<SIZE;i++)
    {
        if(entire_box[i][col] == num)
            return 0;
    }
    int row_start = (row/3)*3;
    int col_start = (col/3)*3;
    for(i=row_start;i<row_start+3;i++)
    {
        for(j=col_start;j<col_start+3;j++)
        {
            if(entire_box[i][j]==num)
                return 0;
        }
    }
    return 1;
}

int solve_sudoku()
{
    int row;
    int col;
    if(ft_number_empty(&row, &col) == 0)
        return 1;
    int n,i;
    for(i=1;i<=SIZE;i++)
    {
        if(ft_is_safe(i, row, col))
        {
            entire_box[row][col] = i;
            if(solve_sudoku())
                return 1;
            entire_box[row][col]=0;
        }
    }
    return 0;
}

int main()
{
    if (solve_sudoku())
        ft_print_sudoku();
    else
        printf("No solution\n");
    return 0;
}
