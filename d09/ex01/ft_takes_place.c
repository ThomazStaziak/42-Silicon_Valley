/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 14:34:55 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/02 15:27:39 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_display(int first_hour, char p_or_a, int second_hour, char p_or_a2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %i.00 %c.M. AND %i.00 %c.M.\n",
			first_hour, p_or_a, second_hour, p_or_a2);
}

void	ft_takes_place(int hour)
{
	if (hour == 0)
		ft_display(hour + 12, 'A', hour + 1, 'A');
	else if (hour == 11)
		ft_display(hour, 'A', hour + 1, 'P');
	else if (hour == 12)
		ft_display(hour, 'P', hour - 11, 'P');
	else if (hour == 23)
		ft_display(hour - 12, 'P', hour - 11, 'A');
	else if (hour == 24)
		ft_display(hour - 12, 'A', hour - 23, 'A');
	else if (hour < 11)
		ft_display(hour, 'A', hour + 1, 'A');
	else
		ft_display(hour - 12, 'P', hour - 11, 'P');
}
