/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:28:25 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/30 23:00:36 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		ft_is_alphanumeric(char c)
{
	if (ft_is_alpha(c) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		ft_is_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i]))
		{
			if (!ft_is_up(str[i]) && ft_is_alpha(str[i]))
				str[i] -= 32;
			i++;
		}
		while (ft_is_alphanumeric(str[i]))
		{
			if (ft_is_up(str[i]))
				str[i] += 32;
			i++;
		}
		i++;
	}
	return (str);
}
