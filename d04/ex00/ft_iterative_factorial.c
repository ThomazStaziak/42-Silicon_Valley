/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 23:43:55 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/27 11:45:33 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int stack;

	i = 1;
	stack = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (i <= nb)
		{
			stack *= i;
			++i;
		}
		return (stack);
	}
}
