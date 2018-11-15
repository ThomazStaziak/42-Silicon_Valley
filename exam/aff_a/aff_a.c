/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:10:54 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/12 17:43:11 by thsilva          ###   ########.fr       */
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
		 ft_putchar('a');
	 else
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				ft_putchar('a');
				break ;
			}
			i++;
		}
	 ft_putchar('\n');
}
