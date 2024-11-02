/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:47:57 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/21 09:26:38 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	val;
	int	z;

	if (size < 2)
		return ;
	i = 1;
	while (i < size)
	{
		z = i;
		val = tab[z];
		while (tab[z - 1] > val && z >= 1)
		{
			tab[z] = tab[z - 1];
			z--;
		}
		tab[z] = val;
		i++;
	}
}

/*
#include<stdio.h>

//		printf("---------first : tab[%d] = %d\n",z , val);
//			printf("while : tab[%d] = %d\n", z - 1, tab[z-1]);
void	prtab(int *tab, int sz)
{
	int	i = 0;

	while (i < sz)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	tab[6];

	tab[0] = 56;
	tab[1] = 36;
	tab[2] = -1;
	tab[3] = 44;
	tab[4] = 42;
	tab[5] = -42;
	prtab(tab, 6);
	ft_sort_int_tab(tab, 6);
	prtab(tab, 6);
}
*/
