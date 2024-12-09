/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:30:19 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/09 10:23:49 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	iterative_cascade(int nb, int result)
{
	result = result * nb;
	return (result);
}

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int iterations;

	result = 1;
	iterations = 0;
	if (power < 0)
		return 0;
	if (nb == 0 && power == 0)
		return 1;
	while (iterations < power)
	{
		iterations++;
		result = iterative_cascade(nb, result);
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 4;

	printf("Result : %d\n", ft_iterative_power(nb, power));
}
