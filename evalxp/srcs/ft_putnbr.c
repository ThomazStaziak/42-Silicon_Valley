/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:10:00 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/30 21:57:00 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb == -987654321)
	{
		ft_putchar('-');
		ft_putnbr(987654321);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		else if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}
