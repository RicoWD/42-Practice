/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:01:09 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/26 18:16:22 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>

void	test(int n)
{
	printf("%d\n", ft_fibonacci(n));
}

int	main(void)
{
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(5);
	test(-5);
	test(10);
	test(25);
}*/
