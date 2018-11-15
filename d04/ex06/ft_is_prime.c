/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 21:50:08 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/27 22:17:59 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int counter;
	int divisible;

	divisible = 0;
	counter = 2;
	while (counter < nb / 2)
	{
		if (nb % counter == 0)
		{
			++divisible;
		}
		++counter;
	}
	if ((divisible == 0 && nb > 4) || nb == 2 || nb == 3)
		return (1);
	else
		return (0);
}
