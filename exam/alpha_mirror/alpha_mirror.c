/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 23:26:37 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/14 23:49:56 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			ft_putchar(155 - av[1][i]);
		else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			ft_putchar(219 - av[1][i]);
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
