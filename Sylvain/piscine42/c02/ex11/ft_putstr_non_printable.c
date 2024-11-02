/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:10:54 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/24 11:07:02 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_printable(char c)
{
	if (! (c >= 32 && c <= 126))
		return (0);
	return (1);
}

void	print_hex_digit(int d)
{
	char	c;

	if (d < 10)
		c = d + 48;
	else
		c = d + 97 - 10;
	write(1, &c, 1);
}

void	print_hex(unsigned char c)
{
	int	d;

	write(1, "\\", 1);
	d = c >> 4;
	print_hex_digit(d);
	d = c % 16;
	print_hex_digit(d);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_printable(*str))
			write(1, str, 1);
		else
			print_hex((unsigned char)(*str));
		str++;
	}
}
/*
#include<stdio.h>

int	main(void)
{
	ft_putstr_non_printable("\x81\x02\x03\x7F Coucou ecole\n42");
}*/
