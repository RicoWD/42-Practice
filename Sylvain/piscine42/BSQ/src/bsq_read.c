/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:38:35 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/09 18:50:04 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bsq_read.h"

int	read_bsq(t_bsq *bsq, int file_desc)
{
	int	nb_chars;

	nb_chars = read(file_desc, bsq->bfr, 2048);
	if (nb_chars == -1)
	{
		close(file_desc);
		exit(1);
	}
	return (nb_chars);
}

int	do_process(t_bsq *bsq, int cds[2], char *buffer, int *nb_chars)
{
	char	c;
	int		err_code;

	while (*nb_chars > 0)
	{
		c = buffer[0];
		err_code = bsq->process(bsq, c, cds);
		if (err_code != 0)
			return (err_code);
		buffer++;
		(*nb_chars)--;
	}
	return (0);
}

void	stop(t_bsq *bsq, int file_desc, int err)
{
	close(file_desc);
	if (err != 0)
	{
		display_error();
	}
	else
	{
		apply_solution(bsq);
		display_board(bsq);
	}
}

int	last_check(t_bsq *bsq, int cds[2])
{
	if (bsq->nb_rows == 0 || bsq->nb_cols == 0)
		return (0x81);
	if ((cds[0] != 0 && cds[1] != bsq->nb_rows))
	{
		return (0x82);
	}
	return (0);
}

void	fast_job(int file_desc, t_bsq *bsq)
{
	int	nb_chars;
	int	cds[2];
	int	err_code;

	cds[0] = 0;
	cds[1] = 0;
	bsq->process = &read_header;
	nb_chars = read_bsq(bsq, file_desc);
	while (nb_chars > 0)
	{
		err_code = do_process(bsq, cds, bsq->bfr, &nb_chars);
		if (err_code > 0)
		{
			stop(bsq, file_desc, 1);
			return ;
		}
		if (nb_chars == 0)
			nb_chars = read_bsq(bsq, file_desc);
	}
	if (last_check(bsq, cds) != 0)
	{
		stop(bsq, file_desc, 1);
		return ;
	}
	stop(bsq, file_desc, 0);
}
