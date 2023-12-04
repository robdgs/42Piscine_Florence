/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spmitsob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:50:28 by spmitsob          #+#    #+#             */
/*   Updated: 2023/11/14 23:50:29 by spmitsob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i <= size - 2)
	{
		j = i + 1;
		while (j <= size -1)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
//int main ()
//{
//	int c[5];
//	int	i;
//	
//	i = 0;
//	c[0] = 5;
//	c[1] = 9;
//	c[2] = 1;
//	c[3] = 3;
//	c[4] = 0;
//	ft_sort_int_tab(c, 5);
//	while (i < 5)
//	{
//		printf("%d ", c[i]);
//		i++;
//	}
//}
