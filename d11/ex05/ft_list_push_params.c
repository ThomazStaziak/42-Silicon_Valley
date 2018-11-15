/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:30:18 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/07 18:05:22 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*temp_list;

	i = 0;
	temp_list = NULL;
	if (ac < 0)
		return (NULL);
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = temp_list;
		temp_list = list;
		i++;
	}
	return (list);
}
