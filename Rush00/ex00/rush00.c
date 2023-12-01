/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corusu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:57:36 by corusu            #+#    #+#             */
/*   Updated: 2023/11/18 20:57:37 by corusu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	parse_edje(int x)
{
	int	x1;

	x1 = 1;
	ft_putchar('o');
	x1++;
	while (x1 < x)
	{
		ft_putchar('-');
		x1++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	parse_mid(int x)
{
	int	x1;

	x1 = 1;
	ft_putchar('|');
	x1++;
	while (x1 < x)
	{
		ft_putchar(' ');
		x1++;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	y1;

	y1 = 1;
	if (x > 0 && y > 0)
	{
		parse_edje(x);
		y1++;
		while (y1 < y)
		{
			parse_mid(x);
			y1++;
		}
		if (y > 1)
			parse_edje(x);
	}
}
