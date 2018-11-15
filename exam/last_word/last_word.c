/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:18:10 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/13 13:31:40 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
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
	while (av[1][i])
		i++;
	i--;
	while (is_space(av[1][i]))
		i--;
	while (av[1][i] && !is_space(av[1][i]))
		i--;
	i++;
	while (av[1][i] && !is_space(av[1][i]))
	{
		ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
