/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:01:11 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/11 14:17:54 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	placing(int	i, int positions)
{
	int i_col;
	int i_lin;
	int	j;
	int	k;

	i_col = 0;
	i_lin = 0;
	i = 0;
	j = 0;
	k = 0;
    if (i_col est vide)
        if (i_lin est vide && i_lin +1 est vide && i_lin +1 est vide)
        {
        	positions[i] = i_col;
            positions[i+1] = i_lin;
			i++;
            placing(i);
        }
	else
	{
		i_col++;
		placing(i, positions);
	}
	return (i);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	c;
	int	positions[10];
	
	while (i < 10)
	{
		placing(i, positions);
		i++;
	}
	if (i = 10);
		c++;
}
