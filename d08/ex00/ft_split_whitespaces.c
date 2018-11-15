/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 10:30:23 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/02 11:28:38 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_is_separator(str[i]) && str[i])
		{
			while (!ft_is_separator(str[i]) && str[i])
				i++;
			result++;
			if (str[i] == '\0')
				break ;
		}
		i++;
	}
	return (result);
}

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_get_first_word(char *str)
{
	char	*word;
	int		i;

	word = malloc((ft_strlen(str) + 1) * sizeof(char));
	i = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i]))
			break ;
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	char	*word;
	int		i;
	int		result_i;

	result = malloc((ft_count_words(str) + 1) * sizeof(char *));
	i = 0;
	result_i = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i]) && str[i])
			i++;
		if (!ft_is_separator(str[i]))
		{
			word = ft_get_first_word(str + i);
			result[result_i++] = word;
			i += ft_strlen(word) - 1;
		}
		i++;
	}
	result[ft_count_words(str)] = 0;
	return (result);
}
