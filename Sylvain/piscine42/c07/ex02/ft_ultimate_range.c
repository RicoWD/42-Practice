/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 07:44:51 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/02 09:34:45 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	*tab;
	int	i;

	diff = max - min;
	if (diff <= 0)
		return (0);
	tab = (int *) malloc(diff * sizeof (int));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < diff)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (diff);
}
/*
#include<stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0) ;
	int	a = atoi(argv[1]);
	int	b = atoi(argv[2]);
	int	*tab;
	int	nb = ft_ultimate_range(&tab, a, b);
	printf("nb elemet : %d\n\n", nb);
	if (nb > 0)
	{
		for (int i = -1; i < b - a + 1; i++)
		{
			if (i == 0)
				printf("~~~|  ");
			printf("%d ", tab[i]);
			if (i == b - a - 1)
				printf(" |~~~");
		}
		free(tab);
	}

	return (0);
}*/
