/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:39:01 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/15 15:49:55 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     max(int* tab, unsigned int len)
{
    int temp;
    unsigned int i;

    i = 0;
    temp = 0;
    while (i < len)
    {
        if (temp < tab[i])
            temp = tab[i];
        i++;
    }
    return (temp);
}

int main(void)
{
    int array[30] = {1, 90, 7, 4, 3, 9};
    int i;

	i = 0;	
	while (array[i])
	{
		printf("%i", array[i]);
		i++;
	}
	printf("\n\n%i\n", max(array, i));
}
