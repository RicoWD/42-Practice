/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:10:45 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/09 15:35:23 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 0;
	while (sqr < nb)
	{
		sqr++;
		if (nb == sqr * sqr)
			return sqr;
	}
	return 0;
}

#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 9;
	printf("Racine carrée : %d\n", ft_sqrt(nb));
}
