/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 08:31:00 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/27 09:47:44 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rounded_sqrt(int nb)
{
	long	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i <= nb)
	{
		if ((i * i) == nb || (i * i) > nb)
			return ((int)i);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (!(nb % 2))
		return (0);
	i = 3;
	while (i <= ft_rounded_sqrt(nb))
	{
		if (! (nb % i))
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	k;
	long	n1;
	long	n2;

	if (nb <= 2)
		return (2);
	else if (nb <= 3)
		return (3);
	else if (nb <= 5)
		return (5);
	else if (nb <= 7)
		return (7);
	k = nb / 6;
	while (1)
	{
		n1 = 6 * k - 1;
		n2 = 6 * k + 1;
		if (n1 >= nb && ft_is_prime(n1))
			return (n1);
		if (n2 >= nb && ft_is_prime(n2))
			return (n2);
		k++;
	}
	return (0);
}
/*
#include<stdio.h>

void	test(int nb)
{
	printf("%d : %d\n", nb , ft_find_next_prime(nb));
}

int	main(void)
{
	test(-10);
	test(2);
	test(3);
	test(4);
	test(5);
	test(6);
	test(7);
	test(8);
	test(11);
	test(12);
	test(692);
	test(701);
	test(972);
	test(978);
	test(984);
	test(991);
	test(992);
	test(0x7FFFFFFF);
}*/
