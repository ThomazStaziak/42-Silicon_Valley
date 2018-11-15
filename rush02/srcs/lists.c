/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:16:57 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 22:17:36 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

t_list	*ft_create_list(char data)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(*list));
	list->next = NULL;
	list->data = data;
	return (list);
}

void	ft_push_list(t_list **first, char data)
{
	t_list	*list;

	list = *first;
	if (!list)
	{
		*first = ft_create_list(data);
		return ;
	}
	while (list->next)
		list = list->next;
	list->next = ft_create_list(data);
}

char	*ft_concat_list(t_list *list, int len)
{
	int		i;
	char	*str;

	str = "\0";
	i = 0;
	if (list)
	{
		str = (char*)malloc(sizeof(*str) * (len + 1));
		while (i < len)
		{
			str[i] = list->data;
			list = list->next;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

char	*ft_read_bytes(void)
{
	t_list	*list;
	char	buf;
	char	*str;
	int		i;

	list = NULL;
	str = NULL;
	i = 0;
	while (read(0, &buf, 1) > 0)
	{
		ft_push_list(&list, buf);
		i++;
	}
	str = ft_concat_list(list, i);
	return (str);
}
