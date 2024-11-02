/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:59:43 by radlouni          #+#    #+#             */
/*   Updated: 2024/10/09 18:50:32 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bsq_main.h>

void	init_bsq(t_bsq *bsq)
{
	bsq->temp = 0;
	bsq->sign = 1;
	bsq->bfr = create_buffer(2049);
	bsq->bfr_tmp = 0;
	bsq->max = -1;
	bsq->nb_rows = 0;
	bsq->nb_cols = 0;
	bsq->base.col = -1;
	bsq->base.row = -1;
	bsq->chars.empty = -1;
	bsq->chars.wall = -1;
	bsq->chars.full = -1;
	bsq->board = 0;
	bsq->calc = 0;
	bsq->process = 0;
}

void	go_stdin(t_bsq *bsq)
{
	init_bsq(bsq);
	fast_job(0, bsq);
	free_all(bsq);
}

void	go_args(int argc, char **argv, t_bsq *bsq)
{
	int		file_desc;
	int		i;

	i = 0;
	while (i < argc)
	{
		file_desc = open(argv[i], 0);
		if (file_desc != -1)
		{
			if (i > 0)
				write(1, "\n", 1);
			init_bsq(bsq);
			fast_job(file_desc, bsq);
			free_all(bsq);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_bsq	bsq;

	if (argc > 1)
	{
		go_args(argc - 1, ++argv, &bsq);
	}
	else
		go_stdin(&bsq);
	return (0);
}
