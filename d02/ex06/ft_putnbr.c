/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:19:14 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/25 20:53:56 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int        ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print(int n)
{
    ft_putchar(n + 48);
    ft_putchar('\n');
}

void    ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        ft_putnbr(-n);
    }
    else if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_print(n % 10);
    }
}


int        main(void)
{
    ft_putnbr(222);
    return (0);
}
