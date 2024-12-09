/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:43:44 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/09 16:47:17 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb <=1)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	nb1;
	int nb2;
	int	nb3;

	nb1 = 25;
	nb2 = 2;
	nb3 = 165;

	printf("Is nb1 prime : %d\n", ft_is_prime(nb1));
	printf("Is nb2 prime : %d\n", ft_is_prime(nb2));
	printf("Is nb3 prime : %d\n", ft_is_prime(nb3));
}

