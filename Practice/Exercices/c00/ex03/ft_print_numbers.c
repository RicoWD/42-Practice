/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:55:19 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/21 11:37:07 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
}

void	ft_print_numbers2(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

void	ft_print_numbers3(void)
{
	int	n;

	n = 0;
	while (n <= 9)
	{
		write(1, &(char){n + '0'}, 1);
		n++;
	}
}

void	ft_print_numbers4(void)
{
	int		n;
	char	c;

	n = 0;
	while (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_print_numbers2();
	ft_print_numbers3();
	ft_print_numbers4();
}
