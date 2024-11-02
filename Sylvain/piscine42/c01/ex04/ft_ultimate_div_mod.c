/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:45:51 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/20 11:51:26 by smaitre          ###   ########.fr       */
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
/*
#include<stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 5;
	printf("a : %d\n", a);
	printf("b : %d\n\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a : %d\n", a);
	printf("b : %d\n", b);
}*/
