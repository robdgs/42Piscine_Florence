/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:47:14 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/03 20:47:27 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//legge un carattere, se esso e' una nuova riga,
//continua a leggere fin quando non trova un carattere
//diverso da una nuova riga.
void	read_and_skip(int fd, char *c)
{
	read(fd, c, 1);
	while (*c == '\n')
		read(fd, c, 1);
}

//ft_getnb alloca memoria per una stringa, salva i caratteri numerici
//consecutivi nella stringa allocata, restituendo la stringa 
//rappresentando un numero intero.
char	*ft_getnb(int fd)
{
	char	c;
	char	*str;
	int		i;

	str = malloc(sizeof(char) * 128);
	if (!str)
		exit(1);
	i = 0;
	read_and_skip(fd, &c);
	while (c >= '0' && c <= '9')
	{
		str[i++] = c;
		read(fd, &c, 1);
	}
	str[i] = '\0';
	return (str);
}
