/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 01:34:31 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/04 01:45:38 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	long result;
	int i;
	int signal;
	
	signal = 1;
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - '0'; 
		else if (str[i] == '-')
			signal = -1;
		i++;
	}
	result = (int)result * signal;
	return (result);
}

int main(void)
{
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	printf("%i\n",ft_atoi(a));	
}
