/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:55:05 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/30 22:53:24 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (!*str)
		return (1);
	while ((str[i] >= 'A' && str[i] <= 'Z'))
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}