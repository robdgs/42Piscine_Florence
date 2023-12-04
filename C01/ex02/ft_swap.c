/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:07:49 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/18 16:17:23 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	variabile_temporanea;

	variabile_temporanea = *a;
	*a = *b;
	*b = variabile_temporanea;
}
/*int main (void){
	int a = 2;
	int b = 3;
	int *puntA = &a;
	int *puntB = &b;
	ft_swap(puntA, puntB);
}*/
// !! per testare inserire 
//printf("a= %d, b= %d", *a, *b);
//dentro la funzione ft_swap
