/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:58:51 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/06 15:55:40 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *final_array;

	i = 0;
	final_array = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		final_array[i] = f(tab[i]);
		i++;
	}
	return (final_array);
}
