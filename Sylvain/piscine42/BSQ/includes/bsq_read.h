/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_read.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:22:13 by radlouni          #+#    #+#             */
/*   Updated: 2024/10/09 19:01:09 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_READ_H
# define BSQ_READ_H

# include"bsq_bsq.h"
# include<unistd.h>
# include<stdlib.h>

void	display_board(t_bsq *bsq);
void	display_error(void);
void	apply_solution(t_bsq *bsq);
int		read_header(t_bsq *bsq, char c, int cds[2]);

#endif
