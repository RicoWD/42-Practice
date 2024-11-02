/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:12:32 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/26 17:59:17 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include<stdio.h>

void	test(int a, int b)
{
	printf("%d^%d : %d\n", a, b, ft_recursive_power(a, b));
}

int	main(void)
{
	test(0, 5);
	test(0, 0);
	test(-2, 3);
	test(-2, 4);
	test(2, 5);
	test(2, 2);
	test(2, 1);
	test(2, 0);
	test(3, -4);
	test(-5, -3);
	return (0);
}*/
