/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:55:26 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/09 15:14:18 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bsq_free.h"

void	free_board(t_bsq *bsq)
{
	int	row;

	if (bsq->board != 0)
	{
		row = 0;
		while (row < bsq->nb_rows)
		{
			if (bsq->board[row] != 0)
			{
				free(bsq->board[row]);
				bsq->board[row] = 0;
			}
			row++;
		}
		free(bsq->board);
		bsq->board = 0;
	}
}

void	free_buffer(t_bsq *bsq)
{
	if (bsq->bfr != 0)
	{
		free(bsq->bfr);
		bsq->bfr = 0;
	}
}

void	free_buffer_temp(t_bsq *bsq)
{
	if (bsq->bfr_tmp != 0)
	{
		free(bsq->bfr_tmp);
		bsq->bfr_tmp = 0;
	}
}

void	free_calc(t_bsq *bsq)
{
	if (bsq->calc != 0)
	{
		free(bsq->calc);
		bsq->calc = 0;
	}
}

void	free_all(t_bsq *bsq)
{
	free_buffer_temp(bsq);
	free_calc(bsq);
	free_buffer(bsq);
	free_board(bsq);
}
