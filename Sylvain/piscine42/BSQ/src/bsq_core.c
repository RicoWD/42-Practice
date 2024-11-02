/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_core.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:04:45 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/09 18:49:29 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bsq_core.h"

int	get_min_of(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

int	store_first_cells(t_bsq *bsq, int col)
{
	if (is_wall(bsq, bsq->bfr_tmp[col]))
		bsq->calc[col] = 0;
	else if (is_empty(bsq, bsq->bfr_tmp[col]))
		bsq->calc[col] = 1;
	else
		return (0xA2);
	if (bsq->max < 1 && bsq->calc[col] == 1)
	{
		bsq->max = 1;
		bsq->base.col = col;
		bsq->base.row = 0;
	}
	return (0);
}

int	store_cells(t_bsq *bsq, char c, int cds[2])
{
	int	val;
	int	col;
	int	temp;

	col = cds[0];
	if (is_wall(bsq, c))
		val = 0;
	else if (is_empty(bsq, c))
		val = 1;
	else
		return (0xA1);
	if (cds[1] == 0)
		temp = 0;
	else
		temp = bsq->calc[col];
	if (col == 0 || val == 0)
		bsq->calc[col] = val;
	else
		bsq->calc[col] = compute(bsq, cds);
	bsq->temp = temp;
	bsq->board[cds[1]][cds[0]] = c;
	return (0);
}

int	compute(t_bsq *bsq, int cds[2])
{
	int	a;
	int	b;
	int	c;
	int	val;

	a = bsq->calc[cds[0] - 1];
	b = bsq->calc[cds[0]];
	c = bsq->temp;
	val = get_min_of(a, b, c) + 1;
	if (val > bsq->max)
	{
		bsq->max = val;
		bsq->base.col = cds[0];
		bsq->base.row = cds[1];
	}
	return (val);
}
