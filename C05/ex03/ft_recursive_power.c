/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:54:57 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/28 22:02:13 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}
//#include <stdio.h>
//int main (void) 
//{
//	printf("%d", ft_recursive_power(3,4));
//}
