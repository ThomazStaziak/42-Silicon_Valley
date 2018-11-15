/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:53:57 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/14 00:08:02 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int repeat(char c)
{
	int result;

	result = 0;
	if (c >= 'a' && c <= 'z')
		result = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		result = c -'A' + 1;
	else
		result = 1;
	return (result);
}

int main(int ac, char **av)
{
	int i;
	int result;

	result = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			result = repeat(av[1][i]);
			while (result--)
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
