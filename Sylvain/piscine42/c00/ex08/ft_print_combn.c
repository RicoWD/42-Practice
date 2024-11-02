/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:31:22 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/27 10:54:37 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_end(char str[9], int n)
{
	int	s;
	int	i;

	s = 10 - n;
	i = 0;
	while (i < n)
	{
		if (str[i] != 10 - n + i)
			return (0);
		i++;
	}
	return (1);
}

void	print_me(char str[9], int n)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = '0' + str[i];
		write(1, &c, 1);
		i++;
	}
	if (is_end(str, n))
		return ;
	write(1, ", ", 2);
}

void	compute(char str[9], int n, int c, int limits[2])
{
	int	i;
	int	new_limits[2];
	int	nc;

	if (c == n)
	{
		print_me(str, n);
		return ;
	}
	nc = c + 1;
	i = limits[0];
	while (i <= limits[1])
	{
		str[c] = i;
		if (c < n)
		{
			new_limits[0] = i + 1;
			new_limits[1] = limits[1] + 1;
			compute(str, n, nc, new_limits);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	str[9];
	int		limits[2];

	limits[0] = 0;
	limits[1] = 10 - n;
	compute(str, n, 0, limits);
}
/*
int	main(void)
{
	ft_print_combn(2);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(9);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_combn(3);
	write(1, "\n", 1);
	write(1, "\n", 1);
}*/
