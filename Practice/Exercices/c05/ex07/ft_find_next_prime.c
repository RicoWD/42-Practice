/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:49:14 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/10 12:57:39 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_prime(int nb)
{
    int i;

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

int	ft_find_next_prime(int nb)
{
	while (!is_prime(nb))
	{
		nb++;
	}
	return nb;
}

#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 15;
	printf("The next prime number is... %d\n", ft_find_next_prime(nb));
}
