/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:42:39 by rd-agost          #+#    #+#             */
/*   Updated: 2023/11/18 18:09:01 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main (void) {
	int a = 10;
	int b = 2;
	int div_value;
	int mod_value;
	int *div = &div_value;
	int *mod = &mod_value;
	ft_div_mod(a, b, div, mod);
}*/
// !! per testare inserire 
//printf("div %d, mod %d", *div, *mod);
// in ft_div_mod
