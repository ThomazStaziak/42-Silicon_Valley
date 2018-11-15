/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <thsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:07:10 by thsilva           #+#    #+#             */
/*   Updated: 2018/10/25 22:34:57 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	char1;
	char	char2;
	char	char3;

	char1 = '0' - 1;
	while (++char1 <= '9')
	{
		char2 = char1;
		while (++char2 <= '9')
		{
			char3 = char2 + 1;
			while (char3 <= '9')
			{
				ft_putchar(char1);
				ft_putchar(char2);
				ft_putchar(char3);
				if (char1 != '7' || char2 != '8' || char3 != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				++char3;
			}
		}
	}
}
