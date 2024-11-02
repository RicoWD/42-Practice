/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:33:14 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/09 19:03:47 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include"bsq_bsq.h"

char	*ctab(char *tab, int old_size, int new_size);
void	free_buffer_temp(t_bsq *bsq);
int		is_space(char c);
int		is_sign(char c);
int		read_top_row(t_bsq *bsq, char c, int cds[2]);

#endif
