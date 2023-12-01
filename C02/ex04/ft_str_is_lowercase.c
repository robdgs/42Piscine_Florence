/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:38:31 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/20 18:51:21 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//#include <stdio.h>
/*int main (void){
	int is_lowercase;
	char a[] = "abcvdfRz";
	is_lowercase = ft_str_is_lowercase(a);
	printf("%d", is_lowercase);
}*/
