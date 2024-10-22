/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:22:14 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/21 15:43:16 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

void	ft_putstr2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putstr3(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(void)
{
	ft_putstr("abcdefghijklmnopqrstuvwxyz\n");
	ft_putstr2("abcdefghijklmnopqrstuvwxyz\n");
	ft_putstr3("abcdefghijklmnopqrstuvwxyz\n");
}
