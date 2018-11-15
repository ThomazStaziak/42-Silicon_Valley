/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:17:56 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/27 20:18:26 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || power > 30)
		return (0);
	else if (power > 0)
		return (nb * (ft_recursive_power(nb, power - 1)));
	else
		return (1);
}
