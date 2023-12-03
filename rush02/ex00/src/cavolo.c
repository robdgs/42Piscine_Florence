/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cavolo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:45:15 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/03 20:45:44 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

long long int	getdec(long long int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

long long int	getmult(long long int nb)
{
	if (nb >= 1000000000LL)
		return (1000000000LL);
	else if (nb >= 1000000LL)
		return (1000000LL);
	else if (nb >= 1000LL)
		return (1000LL);
	else if (nb >= 100LL)
		return (100LL);
	else
		return (getdec(nb));
}

void	ft_print(long long int n, t_list *tab, int *first)
{
	int				i;
	long long int	mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
	{
		ft_print(n / mult, tab, first);
	}
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (str == NULL || *str == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (!isdigit((unsigned char)str[i]))
			return (0);
		i++;
	}
	return (1);
}
