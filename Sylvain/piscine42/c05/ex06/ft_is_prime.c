/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 07:27:29 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/27 08:28:32 by smaitre          ###   ########.fr       */
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
/*
#include<stdio.h>

void	test(int nb)
{
	printf("%d : %d\n", nb , ft_is_prime(nb));
}

int	main(void)
{
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(7);
	test(27);
	test(28);
	test(29);
	test(96);
	test(97);
	test(98);
}*/
