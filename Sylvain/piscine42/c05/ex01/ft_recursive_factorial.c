/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:40:54 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/27 13:26:27 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d! : %d\n", -5, ft_recursive_factorial(-5));
	printf("%d! : %d\n", 3, ft_recursive_factorial(4));
	printf("%d! : %d\n", 0, ft_recursive_factorial(0));
	printf("%d! : %d\n", 12, ft_recursive_factorial(12));
}*/
