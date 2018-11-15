/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:13:46 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/08 21:54:55 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_file(char *name)
{
	int is_file;
	char character;

	is_file = open(name, O_RDONLY);
	if (is_file < 0)
		return ;
	while (read(is_file, &character, 1))
		write(1, &character, 1);
	close(is_file);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 21);
	else
		ft_file(argv[1]);
	return (0);
}
