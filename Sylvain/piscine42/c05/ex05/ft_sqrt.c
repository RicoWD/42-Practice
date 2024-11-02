/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:19:39 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/27 07:53:41 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i <= nb)
	{
		if ((i * i) == nb)
			return ((int)i);
		if ((i * i) > nb)
			return (0);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>

void	test(int n)
{
	printf("%d\n", ft_sqrt(n));
}

int	main(void)
{
	test(0);
	test(1);
	test(4);
	test(64);
	test(10000);
	test(65);
	test(-5);
	test(10);
	test(25);
}*/
