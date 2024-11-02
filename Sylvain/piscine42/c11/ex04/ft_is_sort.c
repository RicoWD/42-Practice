/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:21:32 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/08 11:10:29 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	tri1;
	int	tri2;

	tri1 = 1;
	tri2 = 1;
	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			tri1 = 0;
		if (f(tab[i - 1], tab[i]) < 0)
			tri2 = 0;
		i++;
	}
	return (tri1 || tri2);
}
/*
int	tri(int a, int b)
{
	return (a - b);
}

#include<stdio.h>

int	main(void)
{
	int	t1[] = {1, 2, 3, 3, 3, 6};
	int	t2[] = {6, 5, 3, 3, 2, 1};
	int	t3[] = {7, 4, 8, 0, 1, 2};
	printf("\n\nTri ? : %s", ft_is_sort(t1, 6, &tri) ? "Oui" : "Non");
	printf("\n\nTri ? : %s", ft_is_sort(t2, 6, &tri) ? "Oui" : "Non");
	printf("\n\nTri ? : %s\n", ft_is_sort(t3, 6, &tri) ? "Oui" : "Non");
	return (0);
}*/
