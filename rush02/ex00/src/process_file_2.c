/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_file_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:49:05 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/03 20:49:13 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static void	process_loop(int fd, t_list *tab)
{
	int		i;
	char	c;
	char	*tmp;

	i = 0;
	while (i < 32)
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, &c, 1);
		while (c == ' ')
			read(fd, &c, 1);
		if (c == ':')
			read(fd, &c, 1);
		while (c == ' ')
			read(fd, &c, 1);
		tmp = ft_getval(fd, &c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	tab[i].nb = -1;
}

t_list	*process(const char *file)
{
	FILE	*file_ptr;
	int		fd;
	t_list	*tab;

	file_ptr = fopen(file, "r");
	if (!file_ptr)
		return (NULL);
	fd = fileno(file_ptr);
	tab = malloc(sizeof(t_list) * 32);
	if (fd == -1 || !tab)
	{
		fclose(file_ptr);
		return (NULL);
	}
	process_loop(fd, tab);
	fclose(file_ptr);
	return (tab);
}
