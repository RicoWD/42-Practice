/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:51:30 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/02 15:49:00 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nbr_c)
{
	write (1, &nbr_c, 1);
}

void    ft_putnbr(int nb)
{   
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb == 0)
    {
        ft_putchar('0');
        return;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	
	while (ft_putnbr(nbr))
	{
		base[i] = ft_putnbr(nbr)[i];
	}
}

#include <stdio.h>

int	main(void)
{
	int	nbr;
	char	base[100] = "";

	nbr = 1991;

	ft_putnbr_base(nbr, base);
//	printf("Résultat %s\n", ft_putnbr_base(nbr, base));
	return (0);
}
