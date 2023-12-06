/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:25:18 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/06 19:25:46 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
}

int	ft_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = -1;
	while (++index < size)
		final_length += ft_strlen(strings[index]) + sep_length;
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	char	*result;
	char	*temp;
	int		index;

	if (size == 0)
		return (malloc(sizeof(char)));
	full_length = ft_final_length(strs, size, ft_strlen(sep));
	result = (char *)malloc((full_length + 1) * sizeof(char));
	temp = result;
	if (!result)
		return (0);
	index = -1;
	while (++index < size)
	{
		ft_strcat(temp, strs[index]);
		temp += ft_strlen(strs[index]);
		if (index < size - 1)
		{
			ft_strcat(temp, sep);
			temp += ft_strlen(sep);
		}
	}
	*temp = '\0';
	return (result);
}
