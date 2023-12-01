/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corusu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:51:06 by corusu            #+#    #+#             */
/*   Updated: 2023/11/18 18:52:20 by corusu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	parse_first(int x)
{
	int	x1;

	x1 = 1;
	ft_putchar('A');
	x1++;
	while (x1 < x)
	{
		ft_putchar('B');
		x1++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	parse_mid(int x)
{
	int	x1;

	x1 = 1;
	ft_putchar('B');
	x1++;
	while (x1 < x)
	{
		ft_putchar(' ');
		x1++;
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	parse_last(int x)
{
	int	x1;

	x1 = 1;
	ft_putchar('C');
	x1++;
	while (x1 < x)
	{
		ft_putchar('B');
		x1++;
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	y1;

	y1 = 1;
	if (x > 0 && y > 0)
	{
		parse_first(x);
		y1++;
		while (y1 < y)
		{
			parse_mid(x);
			y1++;
		}
		if (y > 1)
			parse_last(x);
	}
}
