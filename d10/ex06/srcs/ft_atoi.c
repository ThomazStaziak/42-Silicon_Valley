/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:11:44 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/06 13:34:21 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int is_negative;
	int result;

	is_negative = 0;
	result = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
			|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == 45)
		is_negative = 1;
	if ((*str == 45) || (*str == 43))
		str++;
	while (*str >= 48 && *str <= 57)
	{
		result *= 10;
		result += (*str - 48);
		str++;
	}
	if (is_negative)
		return (-result);
	else
		return (result);
}
