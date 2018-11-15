/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:51:12 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/07 22:07:47 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int num;

	num = nbr;
	if (begin_list == NULL)
		return (NULL);
	while (num-- && begin_list)
		begin_list = begin_list->next;
	if (num >= -1)
		return (begin_list);
	else
		return (NULL);
}
