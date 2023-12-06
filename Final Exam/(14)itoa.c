/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiorni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:58:48 by ggiorni           #+#    #+#             */
/*   Updated: 2023/12/06 10:58:50 by ggiorni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(long nb)
{
	int	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return(len);
}
char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int	i;

	n = nb;
	i = len(n);
	if(!(str = (char *)malloc(i + 1)))
		return(0);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return(str);
	}
	if(n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(1342345));
}
