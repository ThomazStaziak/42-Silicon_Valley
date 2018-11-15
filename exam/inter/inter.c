/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:48:49 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/14 22:06:35 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int array_fg[128];
	int i;
	
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (array_fg[i])
	{
		array_fg[i] = 0;
		i++;
	}
	i = 0;
	while (av[2][i])
	{
		array_fg[(int)av[2][i]] = 1;
		i++;
	}
	i = 0;
	while (av[1][i])
	{
		if (array_fg[(int)av[1][i]] == 1)
			array_fg[(int)av[1][i]] = 2;
		i++;
	}
	i = 0;
	while (av[1][i])
	{
		if (array_fg[(int)av[1][i]] == 2)
		{
			ft_putchar(av[1][i]);
			array_fg[(int)av[1][i]] = 0;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
