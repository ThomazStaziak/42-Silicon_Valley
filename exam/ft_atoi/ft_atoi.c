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
	if(*str > 10)
		return(ft_atoi(*str / 10));
	ft_atoi(*str % 10) - 48;
	return (*str);
}

int main(int argc, char **argv)
{
	printf("%i\n", ft_atoi(argv[1]));
}
