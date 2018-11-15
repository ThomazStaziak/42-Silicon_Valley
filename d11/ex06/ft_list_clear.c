/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:49:30 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/07 22:45:02 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *free_list;
	t_list *list;

	list = *begin_list;
	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		free_list = *begin_list;
		*begin_list = (*begin_list)->next;
		free(free_list);
	}
	*begin_list = NULL;
}
