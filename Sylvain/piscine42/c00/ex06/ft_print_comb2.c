/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:04:02 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/18 16:10:41 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	digit(int n)
{
	char	c;

	c = '0' + n;
	ft_putchar(c);
}

void	print_num(int n)
{
	int	unit;
	int	diz;

	unit = n % 10;
	diz = (n - unit) / 10;
	digit(diz);
	digit(unit);
}

void	print_nums(int i, int j)
{
	print_num(i);
	ft_putchar(' ');
	print_num(j);
	if (i == 98 && j == 99)
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_nums(i, j);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
