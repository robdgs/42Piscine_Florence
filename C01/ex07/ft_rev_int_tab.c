/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:59:06 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/19 16:59:40 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	app;
	int	i;

	i = 0;
	while (i < size)
	{
		size--;
		app = tab[i];
		tab[i] = tab[size];
		tab[size] = app;
		i++;
	}
}
/*int main (void) {
int tab[6]={0, 1, 2, 3, 4, 5};
int size = 6;
ft_rev_int_tab(tab, size);
printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}*/
