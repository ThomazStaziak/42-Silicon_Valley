/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:49:34 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/30 22:52:56 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (1);
	while ((str[i] >= 'a' && str[i] <= 'z'))
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}
