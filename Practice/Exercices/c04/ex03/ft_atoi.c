/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:09 by codephenix5       #+#    #+#             */
/*   Updated: 2024/11/28 23:46:53 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sign_counter;
	int	nbr;

	i = 0;
	j = 0;
	sign_counter = 0;
	nbr = 0;
	if ((str[i]) && (str[i] == ' ') || (str[i] >= '0') || (str[i] <= '9'))
	{
		if (str[i] == '-')
			sign_counter++;
		if (sign_counter % 2 == 0)
			nbr = '-';
			j++;
		if (str[i] >= '0' && str[i] <= '9')
			nbr = str[i];
			j++;
		i++;
	}
	return (nbr);
}

#include <stdio.h>

int	main(void)
{
	char	str[20] = "   -+--+1234o1223";

	printf("Voilà, ce que je reçois %d\n", ft_atoi(str));
}
