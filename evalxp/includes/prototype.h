/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prototype.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:43:55 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 12:20:20 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPE_H
# define PROTOTYPE_H

char	*rm_spaces(char *str);
int		parentheses(char **str);
int		plus_minus(char **str);
int		div_mul_mod(char **str);
int		calculate(int num1, char op, int num2);
int		eval_expr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);

#endif
