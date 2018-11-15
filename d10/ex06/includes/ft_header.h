/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:24:13 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/06 14:43:40 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_get_op(char *operation);
int		ft_make_math(int num1, int operation, int num2);
int		ft_atoi(char *str);
int		ft_sub(int num1, int num2);
int		ft_sum(int num1, int num2);
int		ft_mul(int num1, int num2);
int		ft_div(int num1, int num2);
int		ft_mod(int num1, int num2);

#endif
