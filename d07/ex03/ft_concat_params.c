/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 22:07:59 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/01 22:46:17 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		word;
	int		letter;
	char	*string;

	word = 1;
	letter = 0;
	i = 0;
	string = (char*)malloc(sizeof(char) * argc);
	while (word < argc)
	{
		letter = 0;
		while (argv[word][letter] != '\0')
		{
			string[i] = argv[word][letter];
			letter++;
			i++;
		}
		if (word + 1 < argc)
			string[i] = '\n';
		word++;
		i++;
	}
	string[i - 1] = '\0';
	return (string);
}
