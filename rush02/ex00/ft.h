/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:49:15 by ggiorni           #+#    #+#             */
/*   Updated: 2023/12/03 16:49:20 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_list
{
	long long int	nb;
	char			*val;
}	t_list;

void			read_and_skip(int fd, char *c);
int				process_input_ac3(char **av, int *first);
int				ft_print_error(int ret, char **av, t_list *tab, int *first);
//static void	process_loop(int fd, t_list *tab);
long long int	getdec(long long int nb);
long long int	getmult(long long int nb);
void			ft_print(long long int n, t_list *tab, int *first);
int				is_valid_number(char *str);
char			*ft_getnb(int fd);
char			*ft_getval(int fd, char *c);
t_list			*process(const char *file);
void			convert_number(char *number_str, t_list *dict);
void			convert_three_digit_number(int number, t_list *dict);
char			*find_in_dict(int number, t_list *dict);
char			*ft_strdup(char *src);
int				ft_atoi(const char *str);
int				isdigit(int c);
void			ft_putstr(char *str);

#endif
