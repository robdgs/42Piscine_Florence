/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:22:35 by rd-agost          #+#    #+#             */
/*   Updated: 2023/12/05 16:23:23 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*aaa;
	int	j;

	j = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	aaa = (int *)malloc(size * sizeof(int));
	if (aaa == NULL)
		return (-1);
	while (min < max)
	{
		aaa[j] = min;
		j++;
		min++;
	}
	*range = aaa;
	return (j);
}
/*#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
