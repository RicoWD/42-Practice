/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:43:52 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/22 11:07:17 by codephenix5      ###   ########.fr       */
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

	one = 17;
	two = 71;	
	printf("Previous %d %d\n", one, two);
	ft_swap(&one, &two);
	printf("Previous %d %d\n", one, two);
}
