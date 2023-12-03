/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:50:37 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/03 20:50:44 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_print_error(int ret, char **av, t_list *tab, int *first)
{
	if (ret == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ret == 2)
	{
		write(1, "DictError\n", 10);
		return (0);
	}
	if (ret == 3)
	{
		ft_print(atoll(av[1]), tab, first);
		free(tab);
	}
	if (ret == 4)
	{
		write(1, "DictError\n", 10);
		return (1);
	}
	return (0);
}

int	process_input_ac3(char **av, int *first)
{
	t_list		*tab;
	long long	input_number;

	if (!is_valid_number(av[2]))
		return (ft_print_error(1, av + 1, NULL, NULL));
	input_number = atoll(av[2]);
	if (input_number < 0 || input_number > 1000000000LL)
		return (ft_print_error(2, av + 1, NULL, NULL));
	tab = process(ft_strdup(av[1]));
	if (tab != NULL)
		return (ft_print_error(3, av + 1, tab, first));
	else
		return (ft_print_error(4, av + 1, NULL, NULL));
}

int	main(int ac, char **av)
{
	t_list		*tab;
	int			*first;
	int			addr_first;
	long long	input_number;

	addr_first = 1;
	first = &addr_first;
	if (ac == 2)
	{
		if (!is_valid_number(av[1]))
			return (ft_print_error(1, av, NULL, NULL));
		input_number = atoll(av[1]);
		if (input_number < 0 || input_number > 1000000000LL)
			return (ft_print_error(2, av, NULL, NULL));
		tab = process("numbers.dict");
		if (tab != NULL)
			return (ft_print_error(3, av, tab, first));
		else
			return (ft_print_error(4, av, NULL, NULL));
	}
	else if (ac == 3)
		return (process_input_ac3(av, first));
	write(1, "DictError\n", 10);
	return (1);
}
