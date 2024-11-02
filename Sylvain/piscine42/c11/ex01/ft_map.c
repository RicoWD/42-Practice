/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:20:03 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/04 09:36:51 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*mytab;

	i = 0;
	if (length < 0)
		return (0);
	mytab = (int *)malloc(length * sizeof (int));
	if (!mytab)
		return (0);
	while (i < length)
	{
		mytab[i] = f(tab[i]);
		i++;
	}
	return (mytab);
}
/*
#include<stdio.h>

int	div2(int nb)
{
	return (nb / 2);
}

int	main(void)
{
	int	tab[] = {-200, 50, 40, 3, 2, 0, 8, 0x7FFFFFFF, 0x80000000};
	int	*tab2;
	tab2 = ft_map(tab, 9, &div2);
	printf("----------------------------------------------\n  ");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", tab2[i]);
	}
	printf("\n----------------------------------------------\n");
}*/
