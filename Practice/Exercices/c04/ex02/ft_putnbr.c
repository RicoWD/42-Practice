/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:24:54 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/25 11:17:03 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nb_c;
	long	nb_l;

	nb_l = nb;
	if (nb_l < 0)
	{
		write (1, "-", 1);
		nb_l = -nb_l;
	}
	if (nb_l >= 10)
        ft_putnbr(nb_l / 10);
	nb_c = (nb_l % 10) + 48;
	write (1, &nb_c, 1);
}

#include <stdio.h>

void	tes_nbr(int nb)
{
	ft_putnbr(nb);
	write(1, "\n", 1);
}

int	main(void)
{	
	tes_nbr(0x7fffffff);
	tes_nbr(0x80000000);
	tes_nbr(0x80000000 + 1);
	tes_nbr(0xffffffff);
	tes_nbr(42);
	tes_nbr(458529);
	tes_nbr(1);
	tes_nbr(-1);
	tes_nbr(0);
	tes_nbr(-17995);
	return (0);
}
