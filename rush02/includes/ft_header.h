/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsilva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:28:58 by thsilva           #+#    #+#             */
/*   Updated: 2018/11/11 23:23:23 by thsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUF 4048

typedef	struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;

int					check_str(int rows, int columns, char *str);
int					rows_counter(char *str);
int					columns_counter(char *str);
int					ft_strcmp(char *s1, char *s2);
void				cmp_rushes(char *str);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
void				ft_print(char rush, int rows, int cols, int first_match);
void				ft_push_list(t_list **first, char c);
char				*ft_concat_list(t_list *list, int len);
char				*rush00(int x, int y);
char				*rush01(int x, int y);
char				*rush02(int x, int y);
char				*rush03(int x, int y);
char				*rush04(int x, int y);
char				*ft_read_bytes(void);
t_list				*ft_create_list(char c);

#endif
