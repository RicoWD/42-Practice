/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:26:04 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/18 10:43:23 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	c;
	int	d;

	i = 1;
	while (i < argc)
	{
		j = 0;
		c = 0;
		while (argv[i][j])
		{
			j++;
			c++;
		}
		d = c - 1;
		while (d >= 0)
		{
			write (1, &argv[i][d], 1);
			d--;
		}
		write (1, "\n", 1);
		i++;
	}
}
