/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_disp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:30:23 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/09 19:27:13 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bsq_disp.h"

void	apply_solution(t_bsq *bsq)
{
	int	brow;
	int	bcol;
	int	max;
	int	col;
	int	row;

	max = bsq->max;
	brow = bsq->base.row;
	bcol = bsq->base.col;
	row = brow - max + 1;
	while (row <= brow)
	{
		col = bcol - max + 1;
		while (col <= bcol)
		{
			bsq->board[row][col] = bsq->chars.full;
			col++;
		}
		row++;
	}
}

void	display_board(t_bsq *bsq)
{
	int	col;
	int	row;

	row = 0;
	while (row < bsq->nb_rows)
	{
		col = 0;
		while (col < bsq->nb_cols)
		{
			write(1, &bsq->board[row][col], 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void	display_error(void)
{
	write(2, "map error\n", 10);
}
