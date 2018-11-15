/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 20:14:04 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/28 20:21:24 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(char begin, char middle, char end, int length)
{
	int		counter_x;
	char	escape;

	counter_x = 1;
	escape = '\n';
	while (counter_x <= length)
	{
		if (counter_x == 1)
			ft_putchar(begin);
		else if (counter_x == length)
			ft_putchar(end);
		else
			ft_putchar(middle);
		++counter_x;
	}
	ft_putchar(escape);
}

void	rush(int x, int y)
{
	char	a;
	char	b;
	char	c;
	char	space;
	int		counter_y;

	a = 'A';
	b = 'B';
	c = 'C';
	space = ' ';
	counter_y = 1;
	while (counter_y <= y)
	{
		if (counter_y == 1)
			print_row(a, b, a, x);
		else if (counter_y == y)
			print_row(c, b, c, x);
		else
			print_row(b, space, b, x);
		counter_y++;
	}
}
