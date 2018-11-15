/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:18:58 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/07 17:51:46 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (*begin_list && begin_list)
	{
		list = *begin_list;
		while (list->next)
		{
			list = list->next;
		}
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
