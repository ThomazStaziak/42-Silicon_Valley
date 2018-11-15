/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:49:57 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/06 14:29:48 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_header.h"

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_op(char *operation)
{
	if (operation[0] == '-')
		return (0);
	else if (operation[0] == '+')
		return (1);
	else if (operation[0] == '*')
		return (2);
	else if (operation[0] == '/')
		return (3);
	else if (operation[0] == '%')
		return (4);
	else if (operation[1] != '\0')
		return (-1);
	else
		return (-1);
}

int		ft_make_math(int num1, int operation, int num2)
{
	int (*result[5])(int, int);

	result[0] = &ft_sub;
	result[1] = &ft_sum;
	result[2] = &ft_mul;
	result[3] = &ft_div;
	result[4] = &ft_mod;
	return ((*result[operation])(num1, num2));
}

int		main(int argc, char **argv)
{
	char	result;

	result = 0;
	if (argc != 4)
		return (0);
	if ((ft_op(argv[2]) == 3) && (ft_atoi(argv[3]) == 0))
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if ((ft_op(argv[2]) == 4) && (ft_atoi(argv[3]) == 0))
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else if (ft_op(argv[2]) == -1)
	{
		ft_putstr("0\n");
		return (0);
	}
	result = ft_make_math(ft_atoi(argv[1]), ft_op(argv[2]), ft_atoi(argv[3]));
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
