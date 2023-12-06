/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:16:02 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/05 16:16:46 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*all;
	int	i;
	int	j;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	all = (int *)malloc(size * sizeof(int));
	if (all == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		all[j] = i;
		i++;
		j++;
	}
	return (all);
}
/*#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
