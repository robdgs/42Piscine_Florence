/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:39:27 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/16 11:06:01 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printn(int n)
{
	char	d;
	char	c;

	d = (n / 10) + 48;
	c = (n % 10) + 48;
	write(1, &d, 1);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printn(a);
			write(1, " ", 1);
			ft_printn(b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
int main()
{
	ft_print_comb2();
	return(0);
}
