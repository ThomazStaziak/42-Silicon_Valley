/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:33:54 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/14 19:53:09 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i;
	
	i = 0;	
	if (ac == 2)
		i = ft_strlen(av[1]);
		while (i--)
			ft_putchar(av[1][i]);
	ft_putchar('\n');
	return (0);
}	
