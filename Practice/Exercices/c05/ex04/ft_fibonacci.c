/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:06:18 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/09 15:09:49 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return -1;
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{	
		return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
}

#include <stdio.h>

int	main(void)
{
	int	index;

	index = 10;
	printf("Résultat de l'index de la suite de Fibonacci : %d\n", ft_fibonacci(index));
}
