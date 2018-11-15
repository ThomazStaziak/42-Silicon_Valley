/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 12:28:52 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/27 18:57:00 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int aux;

	i = 1;
	aux = 1;
	if (power < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= power)
		{
			aux *= nb;
			i++;
		}
		return (aux);
	}
}
