/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:45:28 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/19 11:15:10 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 25;
	while (i >= 0)
	{
		ft_putchar('a' + i);
		i--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
