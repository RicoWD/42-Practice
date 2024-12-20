/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:37:09 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/20 11:14:23 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int j;

	tab = ((int *)malloc((max - min) * sizeof(int)));
	if (tab == NULL || min >= max)
		return NULL;
	i = min;
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}

int	main(void)
{
	int	min;
	int	max;
	int	*copied_tab;
	int k;

	min = -5;
	max = 12;
	copied_tab = ft_range(min, max);
	k = 0;
	
	printf("Entre min et max il y a : \n");
	while (k < (max - min))
	{
		printf("%d", copied_tab[k]);
		if (k < (max - min - 1 ))
			printf(", ");
		k++;
	}
	printf("\n");
	if (copied_tab != NULL)
		free(copied_tab);
}
