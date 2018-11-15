/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 23:22:30 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/01 23:32:33 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_seperator(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		count_words(char *str)
{
	int number_words;
	int i;

	number_words = 0;
	i = 0;
	while (str[i])
	{
		if (!is_seperator(str[i]) && str[i])
		{
			while (!is_seperator(str[i]) && str[i])
				i++;
			number_words++;
			if (str[i] == '\0')
				break ;
		}
		i++;
	}
	return (number_words);
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*get_first_word(char *str)
{
	char	*word;
	int		i;

	word = malloc((ft_strlen(str) + 1) * sizeof(char));
	i = 0;
	while (str[i])
	{
		if (is_seperator(str[i]))
			break ;
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**output;
	char	*word;
	int		number_words;
	int		i;
	int		k;

	number_words = count_words(str);
	output = malloc((number_words + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (str[i])
	{
		if (is_seperator(str[i]) && str[i])
			i++;
		if (!is_seperator(str[i]))
		{
			word = get_first_word(str + i);
			output[k++] = word;
			i += ft_strlen(word) - 1;
		}
		i++;
	}
	output[number_words] = 0;
	return (output);
}
