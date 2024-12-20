/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:43:53 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/20 12:52:21 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	
	if (min >= max)
	{
		*range = NULL;
		return 0;
	}
	*range = ((int *)malloc((max - min) * sizeof(int)));
	if (*range == NULL)
	{
		return -1;
	}
	i = 0;
	j = min;
	while (j < max)
	{
		(*range)[i] = j;
		i++;
		j++;
	}
	return (max - min);
}

#include <stdio.h>

int	main(void)
{
	int *range;
	int	min;
	int max;
	int k;
	int size;

	min = -5;
	max = 5;
	k = 0;
	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("ERREUR -1 : min est < 0\n");
		return 1;
	}
	if (size == 0)
	{
		printf("ERREUR 0 : La taille est égale à 0\n");
		return 0;
	}
	while (k < size)
	{
		printf("%d", range[k]);
		if (k < (size - 1))
				printf(", ");
		k++;
	}
	printf("\n");
	if (size > 0)
		free(range);
	return 0;
}
