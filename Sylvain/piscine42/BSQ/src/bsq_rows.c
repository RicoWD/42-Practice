/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_rows.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:48:00 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/10 12:39:32 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bsq_rows.h"

int	read_row(t_bsq *bsq, char c, int cds[2])
{
	if (c == '\n')
	{
		if (cds[0] < bsq->nb_cols)
			return (0xD8);
		if (cds[1] >= bsq->nb_rows)
			return (0xD7);
		cds[1] = cds[1] + 1;
		cds[0] = 0;
		return (0);
	}
	if (cds[0] >= bsq->nb_cols)
	{
		return (0xD9);
	}
	if (store_cells(bsq, c, cds) != 0)
	{
		return (0xDA);
	}
	else
		cds[0] = cds[0] + 1;
	return (0);
}

void	set_board(t_bsq *bsq)
{
	int	row;

	bsq->calc = itab(0, 0, bsq->nb_cols);
	bsq->board = create_board(bsq->nb_rows);
	row = 0;
	while (row < bsq->nb_rows)
	{
		bsq->board[row] = ctab(0, 0, bsq->nb_cols);
		row++;
	}
}

int	process_first_line(t_bsq *bsq, int cds[2])
{
	int	i;
	int	err_code;

	i = 0;
	bsq->nb_cols = cds[0];
	set_board(bsq);
	while (i < bsq->nb_cols)
	{
		bsq->board[0][i] = bsq->bfr_tmp[i];
		err_code = store_first_cells(bsq, i);
		if (err_code)
			return (err_code);
		i++;
	}
	cds[0] = 0;
	cds[1] = 1;
	bsq->process = &read_row;
	return (0);
}

int	read_top_row(t_bsq *bsq, char c, int cds[2])
{
	int	err_code;

	err_code = 0xFA;
	if (c == '\n')
	{
		err_code = process_first_line(bsq, cds);
		bsq->temp = 0;
		free_buffer_temp(bsq);
		return (err_code);
	}
	if (cds[0] == 0)
	{
		bsq->bfr_tmp = ctab(0, 0, 64);
		bsq->temp = 64;
	}
	if (cds[0] > 0 && cds[0] % 64 == 0)
	{
		bsq->bfr_tmp = ctab(bsq->bfr_tmp, bsq->temp, bsq->temp + 64);
		bsq->temp = bsq->temp + 64;
	}
	bsq->bfr_tmp[cds[0]] = c;
	cds[0] = cds[0] + 1;
	return (0);
}
