/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:09:19 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/20 19:17:23 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int main (void){
//	int is_uppercase;
//	char a[] = "ASDFGH";
//	is_uppercase = ft_str_is_uppercase(a);
//	printf("%d", is_uppercase);
//}
