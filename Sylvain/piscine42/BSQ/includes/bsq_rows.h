/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_rows.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:34:29 by radlouni          #+#    #+#             */
/*   Updated: 2024/10/09 19:00:31 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_ROWS_H
# define BSQ_ROWS_H

# include"bsq_bsq.h"

int		*itab(int *tab, int old_size, int new_size);
char	*ctab(char *tab, int old_size, int new_size);
int		read_row(t_bsq *bsq, char c, int cds[2]);
char	**create_board(int rows);
int		store_first_cells(t_bsq *bsq, int col);
int		store_cells(t_bsq *bsq, char c, int cds [2]);
int		free_buffer_temp(t_bsq *bsq);

#endif
