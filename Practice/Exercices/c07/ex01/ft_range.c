/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:37:09 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/18 16:56:06 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = min;
	tab = ((int *)malloc((max - min) * sizeof(int))); 
	while (i < max)
	{
		tab[i] = i;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int	min;
	int	max;

	min = 5;
	max = 12;
	printf("Entre min et max il y a : %ls\n", ft_range(min, max));
}
