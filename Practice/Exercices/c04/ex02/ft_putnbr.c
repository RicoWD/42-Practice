/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:24:54 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/25 03:06:52 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nb_c;
	
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
        ft_putnbr(nb / 10);
	nb_c = (nb % 10) + 48;
	write (1, &nb_c, 1);
}

#include <stdio.h>

int	main(void)
{
	ft_putnbr(21);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(713);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	return (0);
}
