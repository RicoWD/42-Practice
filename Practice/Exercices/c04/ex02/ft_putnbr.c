/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:24:54 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/24 11:58:23 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nb_c;

	if (nb>=10)
	{
		nb_c = (nb%10)+48;

		nb = (nb/10);
	}
	if (nb<10)
	{
		nb_c = (nb%10)+48;
		write(1, &nb_c, 1);
		nb = (nb/10);
	}
}

#include <stdio.h>

int	main(void)
{
	ft_putnbr(21);
	return (0);
}
