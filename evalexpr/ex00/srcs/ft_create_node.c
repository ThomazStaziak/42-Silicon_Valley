/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:31:11 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/10 19:39:15 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_tree	*tree_create_node(void *value)
{
	t_tree *tree;
	
	tree = malloc(sizeof(t_tree))
	if (tree)
	{
		tree->left = 0;
		tree->right = 0;
		tree->value = value;
	}

	return (tree);
}
