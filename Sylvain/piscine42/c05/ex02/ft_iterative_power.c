/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:57:18 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/26 16:44:24 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	val;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	val = nb;
	while (power > 1)
	{
		val = val * nb;
		power--;
	}
	return (val);
}
/*
#include<stdio.h>

void	test(int a, int b)
{
	printf("%d^%d : %d\n", a, b, ft_iterative_power(a, b));
}

int	main(void)
{
	test(0, 5);
	test(0, 0);
	test(2, 5);
	test(2, 2);
	test(2, 1);
	test(2, 0);
	test(3, -4);
	test(-5, -3);
	return (0);
}*/
