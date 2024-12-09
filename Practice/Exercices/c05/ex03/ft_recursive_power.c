/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:05:30 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/09 12:53:42 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return 1 / ft_recursive_power(nb, - power);
	return ft_recursive_power(nb, power - 1) * nb;
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 1;

	printf("Result %d\n", ft_recursive_power(nb, power));
}
