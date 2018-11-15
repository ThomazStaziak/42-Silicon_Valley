/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:27:40 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/14 16:14:22 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int check_str(char *s1, char*s2)
{
	int i;
	int j;
	int num_times;

	i = 0;
	j = 0;
	num_times = 0;
	while (s1[i])
	{
		while (s2[j] != s1[i] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == s1[i])
			num_times += 1;
		i++;
	}
	if (num_times == i)
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3 && check_str(argv[1], argv[2]))
		ft_putstr(argv[1]);
	ft_putstr("\n");
	return (0);
}
