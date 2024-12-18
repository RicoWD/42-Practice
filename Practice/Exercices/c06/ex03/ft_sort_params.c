/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:44:06 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/18 12:06:51 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char *str)
{
	while (*str)
	{
		write (1, &str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			j = i - 1;
			if (argv[i][j] < argv[i+1][j])
			{
				write (1, &argv[i][j], 1);
				j++;
			}
			else
			{
				write (1, &argv[i++][j], 1);
				j++;
			}
		}
		write (1, "\n", 1);
		i++;
	}
}
