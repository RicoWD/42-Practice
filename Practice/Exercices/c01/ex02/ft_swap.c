/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:44:25 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/21 16:51:06 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>

int	main(void)
{
	int	one;
	int	two;

	one = 1;
	two = 2;

	printf("Integers %d %d\n", one, two);
	ft_swap(&one, &two);
	printf("Integers %d %d\n", one, two);
	return (0);
}
