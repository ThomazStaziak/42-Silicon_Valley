/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_print_comb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 23:16:51 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/25 23:41:02 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	char first;
	char second;
	char third;
	char fourth;
	first = '/';
	while(first++ <= '9')
	{
		second = '/';
		while(second++ < '9')
		{
			third = first - 1;
			while(third++ < '9')
			{
				fourth = second;
				while(fourth++ < '9')
				{
					if (second != fourth || first != third)
					{
						if (!(third == '0' && fourth == '1'))
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
					ft_putchar(first);
					ft_putchar(second);
					ft_putchar(' ');
					ft_putchar(third);
					ft_putchar(fourth);
					}
				}
			}
		}
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_comb2();
}
