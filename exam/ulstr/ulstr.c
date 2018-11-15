/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:27:03 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/12 19:58:17 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
			ft_putchar(av[1][i] -= 32);
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			ft_putchar(av[1][i] += 32);
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
