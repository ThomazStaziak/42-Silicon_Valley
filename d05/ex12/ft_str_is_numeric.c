/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:22:03 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/30 22:49:14 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (!*str)
		return (1);
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}
