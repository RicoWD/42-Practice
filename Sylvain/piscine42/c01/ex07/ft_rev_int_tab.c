/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:17:30 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/20 13:46:26 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	ex;
	int	i;

	if (size < 2)
	{
		return ;
	}
	i = 0;
	while (i < (size / 2))
	{
		ex = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = ex;
		i++;
	}
}
/*
#include<stdio.h>

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
	int	tab1[6];
	int	tab2[7];
	int	i;

	i = 0;
	while (i < 6)
	{
		tab1[i] = 3 * i + 1;
		i++;
	}
	i = 0;
	while (i < 7)
	{
		tab2[i] = 25 - 2 * i;
		i++;
	}
	prtab(tab1, 6);
	ft_rev_int_tab(tab1, 6);
	prtab(tab1, 6);
	prtab(tab2, 7);
	ft_rev_int_tab(tab2, 7);
	prtab(tab2, 7);
}*/
