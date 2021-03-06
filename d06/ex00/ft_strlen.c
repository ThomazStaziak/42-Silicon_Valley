/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:52:07 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/31 13:24:23 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char counter;

	counter = 0;
	while (*str != '\0')
	{
		++str;
		++counter;
	}
	return (counter);
}
