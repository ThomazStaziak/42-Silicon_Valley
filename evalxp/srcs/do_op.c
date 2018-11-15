/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:24:12 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 12:27:08 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	do_op(int num1, char op, int num2)
{
	int result;

	result = 0;
	if	(op == '+')
		result = num1 + num2;
	else if	(op == '-')
		result = num1 - num2;
	else if	(op == '*')
		result = num1 * num2;
	else if	(op == '/')
		result = num1 / num2;
	else if	(op == '%')
		result = num1 % num2;
	return (result);
}
