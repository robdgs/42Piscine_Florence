/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:51:07 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/28 12:51:27 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus_count;
	int	number;
	int	i;

	minus_count = 0;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_count++;
		++i;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		++i;
	}
	if (!(minus_count % 2))
		return (number);
	return (-number);
}
//#include <stdio.h>
//	int main (void){
//		char *s = "       ---+--+1234ab567";
//		printf("%d\n", ft_atoi(s));
//	}
