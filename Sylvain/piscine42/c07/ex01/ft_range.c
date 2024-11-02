/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:17:59 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/30 19:58:26 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*tab;
	int	i;

	diff = max - min;
	if (diff <= 0)
		return ((void *)0);
	tab = (int *) malloc(diff * sizeof (int));
	i = 0;
	while (i < diff)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
#include<stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0) ;
	int	a = atoi(argv[1]);
	int	b = atoi(argv[2]);
	int	*t = ft_range(a, b);
	if (t)
	{
		for (int i = -1; i < b - a + 1; i++)
		{
			if (i == 0)
				printf("~~~|  ");
			printf("%d ", t[i]);
			if (i == b - a - 1)
				printf(" |~~~");
		}
		free(t);
	}

	return (0);
}*/
