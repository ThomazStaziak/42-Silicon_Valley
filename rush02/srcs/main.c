/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:22:16 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 23:15:25 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(void)
{
	char	*input;

	input = ft_read_bytes();
	if (check_str(rows_counter(input), columns_counter(input), input))
		cmp_rushes(input);
	return (0);
}
