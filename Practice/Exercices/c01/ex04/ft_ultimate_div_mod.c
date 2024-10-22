/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:45:18 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/22 13:01:30 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;
	
	div = *a / *b;
	mod = *a % *b; 

	*a = div;
	*b = mod;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 1784;
	b = 5;
	
	printf("Envoie %d %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Reception %d %d\n", a, b);
}
