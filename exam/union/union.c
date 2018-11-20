/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:54:54 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/15 15:55:06 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_union(char *str1, char *str2)
{
	int array_fg[128];
	int i;

	i = 0;
	while (array_fg[i])
	{
		array_fg[i] = 0;
		i++;
	}
	i = 0;
	while (str2[i])
	{
		array_fg[(int)str1[i]] = 1;
		i++;
	}
	i = 0;
	while (str1[i])
	{	
		if (array_fg[(int)str2[i]] == 0)
			array_fg[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (array_fg[(int)str1[i]] == 1)
		{
			ft_putchar(str1[i]);
			array_fg[(int)str1[i]] = 0;
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (array_fg[(int)str2[i]] == 1)
		{
			ft_putchar(str2[i]);
			array_fg[(int)str2[i]] = 0;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		print_union(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
