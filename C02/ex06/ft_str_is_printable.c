/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:20:05 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/20 19:29:22 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
			return (1);
	}

}
//#include <stdio.h>
//int main (void) {
//	int is_printable;
//	char a[] = "'\0'"
//	is_printable = ft_str_is_printable(a);
//	printf ("%d", is_printable);
//}
