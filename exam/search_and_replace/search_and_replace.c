/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:04:53 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/14 18:48:40 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 0;

	if (av[2][1] != '\0' || av[3][1] != '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	if (ac == 4)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			i++;
		}
		av[1][i] = '\0';
		ft_putstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
