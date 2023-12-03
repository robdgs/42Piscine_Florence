/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_file_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:49:48 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/03 20:49:55 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//legge i caratteri fin quando non trova una nuova riga
//salvando i caratteri letti in una stringa,
//restituendo  la stringa contenente i caratteri letti fino alla nuova riga.
char	*ft_getval(int fd, char *c)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * 128);
	if (!str)
		exit(1);
	i = 0;
	while (*c != '\n')
	{
		str[i++] = *c;
		read(fd, c, 1);
	}
	str[i] = '\0';
	return (str);
}
