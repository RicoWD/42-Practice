/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:55:10 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/09 16:12:42 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bsq_malloc.h"

int	*itab(int *tab, int old_size, int new_size)
{
	int	*mytab;
	int	i;

	mytab = (int *)malloc(new_size * sizeof (int));
	if (mytab == 0)
		exit (1);
	i = 0;
	if (tab != 0)
	{
		while (i < old_size && i < new_size)
		{
			mytab[i] = tab[i];
			i++;
		}
		free(tab);
		tab = 0;
	}
	return (mytab);
}

char	*ctab(char *tab, int old_size, int new_size)
{
	char	*mytab;
	int		i;

	mytab = (char *)malloc((new_size + 1) * sizeof (char));
	if (mytab == 0)
		exit (1);
	i = 0;
	if (tab != 0)
	{
		while (i < old_size && i < new_size)
		{
			mytab[i] = tab[i];
			i++;
		}
		free(tab);
		tab = 0;
	}
	return (mytab);
}

char	**create_board(int rows)
{
	char	**myboard;

	myboard = (char **)malloc(rows * sizeof (char *));
	if (myboard == 0)
		exit (1);
	return (myboard);
}

char	*create_buffer(int size)
{
	char	*mybuffer;

	mybuffer = (char *)malloc((size + 1) * sizeof (char));
	if (mybuffer == 0)
		exit(1);
	mybuffer[size] = '\0';
	return (mybuffer);
}
