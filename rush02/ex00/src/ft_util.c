/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:48:27 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/03 20:48:40 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_atoi(const char *str)
{
	long long int	res;
	long long int	negative;

	negative = 1;
	res = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == ' '))
		++str;
	if (*str == '-')
	{
		negative = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
//|| *str == '\n' || *str == '\t' ||
//			*str == '\v' || *str == '\f' || *str == '\r')
