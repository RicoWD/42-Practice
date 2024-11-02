/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:15:52 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/26 14:29:28 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ret;

	if (nb < 0)
		return (0);
	ret = 1;
	while (nb > 1)
	{
		ret = ret * nb;
		nb--;
	}
	return (ret);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d! : %d\n", -5, ft_iterative_factorial(-5));
	printf("%d! : %d\n", 3, ft_iterative_factorial(4));
	printf("%d! : %d\n", 0, ft_iterative_factorial(0));
	printf("%d! : %d\n", 12, ft_iterative_factorial(12));
}*/
