/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:27:59 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/10 22:14:25 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
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

int		is_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

char *remove_spaces(char  *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			j = 0;
			while (str[i + j + 1] != 0)
			{
				str[j + i] = str[i + j + 1];
				j++;
			}
			str[j + i] = '\0';
			i = 0;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
