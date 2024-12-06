/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:30:19 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/06 13:00:12 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (nb == 0 && power == 0)
		return 1;
	while (power >= 1)
	{
		nb = (nb * nb) * power;
		ft_iterative_power(nb, power);
	}
	return (power);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 10;
	power = 2;

	printf("Result : %d\n", ft_iterative_power(nb, power));
}
