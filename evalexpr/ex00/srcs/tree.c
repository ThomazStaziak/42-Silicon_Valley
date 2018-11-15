/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:47:48 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/10 20:59:00 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		is_par(char c)
{
	if (c == '(')
		return (1);
	else if (c == ')')
		return (2);
	return (0);
}

void	make_node(char *str, int i, t_tree *node)
{
	node->left = tree_create_node(take_first(str, i));
	node->right = tree_create_node(take_first(str, i));
	node->value = take_operation(str, i);
	to_num(node->left);
	to_num(node->right);
}

int		search_plus_minus(char *str, t_tree *node)
{
	int i;
	int paren;

	paren = 0;
	i = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		if (is_par(str[i] == 1))
			par++;
		else if (is_par(str[i] == 2))
			par--;
		else if ((str[i] == '+') || (str[i] == '-') || (paren == 0))
		{
			make_node(str, i, node);
			return (1);
		}
		i--;
	}
	return (0);
}

int		search_mod_div_mul(char *str, t_tree *node)
{
	int i;
	int paren;

	paren = 0;
	i = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		if (is_par(str[i] == 1))
			par++;
		else if (is_par(str[i] == 2))
			par--;
		else if ((str[i] == '*') || (str[i] == '/') || (str[i] == '%') || (paren == 0))
		{
			make_node(str, i, node);
			return (1);
		}
		i--;
	}
	return (0);
}

void	to_num(t_tree *node)
{
	char	*str;
	int		i;
	int		get_out;
	int		paren;

	get_out = 0;
	paren = 0;
	if (node->value)
	{
		str = get_token(node->value);
		i = ft_strlen(str) -1;
		if (search_plus_minus(str, i, node))
			return ;
		if (search_mod_div_mul(str, i, node))
			return ;
	}
}
