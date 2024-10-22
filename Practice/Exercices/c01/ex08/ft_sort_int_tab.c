/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ep <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:42:10 by ep                #+#    #+#             */
/*   Updated: 2024/10/23 01:52:38 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
    int j;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {17,32,43,54,23,59,90,11};
	int	size;

	size = 8;
	printf("Tableau non trié %tab", tab);
	ft_sort_int_tab(tab, size);
	printf("Tableau trié %tab", tab);
	return (0);
}
