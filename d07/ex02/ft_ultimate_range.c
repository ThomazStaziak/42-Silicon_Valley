/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:23:07 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/01 21:58:54 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	size = max - min;
	*range = (int*)malloc(sizeof(**range) * size);
	if (*range)
	{
		i = 0;
		while (i < size)
		{
			range[0][i] = min + i;
			i++;
		}
		return (size);
	}
	*range = NULL;
	return (0);
}
