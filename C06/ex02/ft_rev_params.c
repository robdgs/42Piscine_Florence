/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:34:12 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/28 19:54:06 by rd-agost         ###   ########.fr       */
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
	y = argc - 1;
	while (y > 0)
	{
		while (argv[y][i] != '\0')
		{
			ft_putchar(argv[y][i]);
			i++;
		}
		--y;
		ft_putchar('\n');
		i = 0;
	}
}
