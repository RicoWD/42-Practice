/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:59:26 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/20 11:42:51 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>

int	main(void)
{
	int	a = 42;
	int	b = 5;
	int	div;
	int	mod;
	printf("a : %d\n", a);
	printf("i : %d\n\n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("div : %d\n", div);
	printf("mod : %d\n", mod);
	return(0);
}*/
