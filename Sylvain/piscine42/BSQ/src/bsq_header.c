/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:31:23 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/10 12:36:17 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bsq_header.h"

int	set_num(t_bsq *bsq, char c)
{
	if (c >= '0' && c <= '9')
	{
		if ((long)(10 * (long)bsq->nb_rows + (c - '0')) > 0x7FFFFFFF)
		{
			bsq->nb_rows = -1;
			return (1);
		}
		bsq->nb_rows = bsq->nb_rows * 10 + (c - '0');
		return (0);
	}
	return (1);
}

int	get_nbrows(t_bsq *bsq, int size)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	bsq->nb_rows = 0;
	while (is_space(bsq->bfr_tmp[i]) == 1 && i < size)
		i++;
	while (is_sign(bsq->bfr_tmp[i]) == 1 && i < size)
	{
		if (bsq->bfr_tmp[i] == '-')
			sign = -sign;
		i++;
	}
	if (sign == -1)
		return (1);
	while (set_num(bsq, bsq->bfr_tmp[i]) == 0 && i < size)
		i++;
	if (bsq->nb_rows <= 0)
		return (1);
	return (0);
}

int	get_def_chars(t_bsq *bsq, int size)
{
	bsq->chars.full = bsq->bfr_tmp[size - 1];
	bsq->chars.wall = bsq->bfr_tmp[size - 2];
	bsq->chars.empty = bsq->bfr_tmp[size - 3];
	if (bsq->chars.full == bsq->chars.wall)
		return (1);
	if (bsq->chars.wall == bsq->chars.empty)
		return (1);
	if (bsq->chars.full == bsq->chars.empty)
		return (1);
	return (0);
}

int	process_header(t_bsq *bsq, int cds[2])
{
	int	size;

	size = cds[0];
	if (size < 4)
		return (0xFE);
	if (get_def_chars(bsq, size) == 1)
		return (0xF0);
	if (get_nbrows(bsq, size - 4) == 1)
		return (0xF3);
	bsq->process = &read_top_row;
	cds[0] = 0;
	return (0);
}

int	read_header(t_bsq *bsq, char c, int cds[2])
{
	int	err_code;

	err_code = 0;
	if (c == '\n')
	{
		err_code = process_header(bsq, cds);
		bsq->temp = 0;
		free_buffer_temp(bsq);
		return (err_code);
	}
	if (cds[0] == 0)
	{
		bsq->bfr_tmp = ctab(0, 0, 32);
		bsq->temp = 32;
	}
	if (cds[0] > 0 && cds[0] % 32 == 0)
	{
		bsq->bfr_tmp = ctab(bsq->bfr_tmp, bsq->temp, bsq->temp + 32);
		bsq->temp = bsq->temp + 32;
	}
	bsq->bfr_tmp[cds[0]] = c;
	cds[0] = cds[0] + 1;
	return (0);
}
