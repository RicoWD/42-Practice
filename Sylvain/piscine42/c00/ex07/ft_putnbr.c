/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:57:10 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/19 12:19:15 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	long	o;
	char	c;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -1 * n;
	}
	o = 1;
	while (n > (10 * o))
		o = 10 * o;
	while (o > 0)
	{
		c = '0' + (n / o);
		write(1, &c, 1);
		n = n % o;
		o = o / 10;
	}
}
/*
int	main(void)
{
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(0x80000000);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0x7FFFFFFF);
	write(1, "\n", 1);
	return (0);
}*/
