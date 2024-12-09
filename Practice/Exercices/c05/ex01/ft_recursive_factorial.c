/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:17:28 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/09 10:53:51 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return 1;

	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return nb;
	}
	return nb;
}

#include <stdio.h>

int	main(void)
{
	int nb;

	nb = 5;
	printf("Result : %d\n", ft_recursive_factorial(nb));
}
