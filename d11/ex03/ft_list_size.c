/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:07:34 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/07 18:02:13 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*list;

	counter = 0;
	list = begin_list;
	if (!list)
		return (counter);
	while (list)
	{
		list = list->next;
		counter++;
	}
	return (counter);
}
