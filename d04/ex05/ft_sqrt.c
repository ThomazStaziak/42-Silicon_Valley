/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 21:28:24 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/27 21:44:17 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int amount;

	amount = 0;
	while (amount * amount < nb)
	{
		++amount;
	}
	if (amount * amount == nb)
		return (amount);
	else
		return (0);
}
