/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:18:14 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/28 18:23:17 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	y;

	i = 0;
	y = 1;
	while (y < argc)
	{
		while (argv[y][i] != '\0')
		{
			ft_putchar(argv[y][i]);
			i++;
		}
		y++;
		ft_putchar('\n');
		i = 0;
	}
}
