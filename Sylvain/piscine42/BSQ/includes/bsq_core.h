/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_core.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:26:27 by radlouni          #+#    #+#             */
/*   Updated: 2024/10/09 18:54:10 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_CORE_H
# define BSQ_CORE_H

# include"bsq_bsq.h"

int	compute(t_bsq *bsq, int cds[2]);
int	is_wall(t_bsq *bsq, char c);
int	is_empty(t_bsq *bsq, char c);

#endif
