/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 21:33:44 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/30 22:37:33 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int find_i;
	int aux_i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		find_i = 0;
		if (str[i] == to_find[find_i])
		{
			aux_i = i;
			while (str[i] == to_find[find_i])
			{
				if (to_find[find_i + 1] == '\0')
					return (&str[aux_i]);
				i++;
				find_i++;
			}
			i = aux_i;
		}
		i++;
	}
	return (0);
}
