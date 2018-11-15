/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:33:27 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 14:04:20 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/prototype.h"

int	parentheses(char **str)
{
	int i;
	int	num;
	int	signal;

	i = 0;
	num	= 0;
	signal = 1;
	if (str[i][0] == '+' || str[i][0] == '-')
	{
		if (str[i][0] == '-')
			signal = -1;
		i++;
	}
	if (str[i][0] == '(')
	{
		i++;
		num = plus_minus(str);
		if (str[i][0] == ')')
			i++;
		return (signal * num);
	}
	while (str[i][0] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i][0] - '0';
		i++;
	}
	return (signal * num);
}

int	plus_minus(char **str)
{
	int 	i;
	int 	num1;
	int 	num2;
	char	op;

	i = 0;
	num1 = parentheses(str);
	while (str[i] != '\0' && str[i] == ')')
	{
		op = str[i][0];
		i++;
		if (op == '+' || op == '-')
			num2 = div_mul_mod(str);
		else
			num2 = parentheses(str);
		num1 = do_op(nb1, nb2, op);
	}
	return (num1);
}


