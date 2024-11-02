/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:51:07 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/27 13:23:56 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	accept_puzzle(int *puzzle, int *nb_sols)
{
	int		i;
	char	c;

	(*nb_sols)++;
	i = 0;
	while (i < 10)
	{
		c = puzzle[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_ok(int *puzzle, int col, int row)
{
	int	i;
	int	delta;

	i = 0;
	while (col > 0 && i < col)
	{
		delta = col - i;
		if (puzzle[i] == row)
			return (0);
		if (puzzle[i] == row - delta)
			return (0);
		if (puzzle[i] == row + delta)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int *puzzle, int col, int row, int *nb_sols)
{
	if (row == 10)
		return ;
	if (col == 10)
	{
		accept_puzzle(puzzle, nb_sols);
		return ;
	}
	puzzle[col] = row;
	if (is_ok(puzzle, col, row))
	{
		solve(puzzle, col + 1, 0, nb_sols);
	}
	solve(puzzle, col, row + 1, nb_sols);
}

int	ft_ten_queens_puzzle(void)
{
	int	nb_sols;
	int	puzzle[10];

	nb_sols = 0;
	solve(puzzle, 0, 0, &nb_sols);
	return (nb_sols);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("\n\n %d", ft_ten_queens_puzzle());
	return (0);
}*/
