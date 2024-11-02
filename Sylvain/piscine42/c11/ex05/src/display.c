/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:49:44 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/05 13:53:35 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	putnbr(int num)
{
	int	c;

	if (num < 0)
		write(1, "-", 1);
	if (num <= -10)
		putnbr(-(num / 10));
	if (num >= 10)
		putnbr(num / 10);
	if (num < 0)
		c = -(num % 10) + '0';
	else
		c = num % 10 + '0';
	write(1, &c, 1);
}

void	display_num(int num)
{
	putnbr(num);
	write(1, "\n", 1);
}

void	display_msg(char *msg)
{
	while (*msg)
		write(1, msg++, 1);
}
