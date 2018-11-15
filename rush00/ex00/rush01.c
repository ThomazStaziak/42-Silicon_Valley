/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 19:55:35 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/28 20:10:04 by thsilva          ###   ########.fr       */
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
	char	slash;
	char	star;
	char	backslash;
	char	space;
	int		counter_y;

	slash = '/';
	star = '*';
	backslash = '\\';
	space = ' ';
	counter_y = 1;
	while (counter_y <= y)
	{
		if (counter_y == 1)
			print_row(slash, star, backslash, x);
		else if (counter_y == y)
			print_row(backslash, star, slash, x);
		else
			print_row(star, space, star, x);
		counter_y++;
	}
}
