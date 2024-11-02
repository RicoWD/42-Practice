/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 08:06:46 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/30 08:14:01 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (*argv[i])
		{
			while (*argv[i])
			{
				write(1, argv[i], 1);
				argv[i]++;
			}
			write(1, "\n", 1);
		}
		i++;
	}
}
