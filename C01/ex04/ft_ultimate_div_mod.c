/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:41:00 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/19 10:54:24 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main (void) {
	int a = 21;
	int b = 3;
	int *ptr_a = &a;
	int *ptr_b = &b;
	ft_ultimate_div_mod(ptr_a, ptr_b);
}*/
//per testare il programma inserire
//printf(" div %d, mod %d", *a, *b);
//dentro ft_ultimate_div_mod
