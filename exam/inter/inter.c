/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:54:03 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/09 15:24:46 by thsilva          ###   ########.fr       */
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

char *check_str(char *s1, char*s2)
{
	int 	i;
	int 	j;
	int		k;
	char	*final_word;

	i = 0;
	j = 0;
	k = 0;
	final_word = "";
	while (s1[i])
	{
		while (s2[j] != s1[i] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == s1[i])
		{
			final_word[k] = s1[i];
			k++;
		}
		i++;
	}
	return (final_word);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		ft_putstr("ERROR\n");
	else
		ft_putstr(check_str(argv[1], argv[2]));
	return (0);
}
