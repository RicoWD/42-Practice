/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:04:53 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/04 08:27:47 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include<unistd.h>

void	ft_putnbr2(int nb)
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
	write(1, "\n", 1);
}

int	main(void)
{
	int	tab[] = {-200, 50, 40, 3, 2, 0, 8, 0x7FFFFFFF, 0x80000000};
	ft_foreach(tab, 9, &ft_putnbr2);
}*/
