/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_bsq.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:41:31 by radlouni          #+#    #+#             */
/*   Updated: 2024/10/09 18:54:04 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_BSQ_H
# define BSQ_BSQ_H

struct	s_bsq;

typedef struct s_sq {
	int	col;
	int	row;
}	t_sq;

typedef struct s_chars {
	char	empty;
	char	wall;
	char	full;
}	t_chars;

typedef struct s_bsq {
	char	*bfr;
	char	*bfr_tmp;
	int		sign;
	int		nb_rows;
	int		nb_cols;
	t_chars	chars;
	char	**board;
	int		*calc;
	int		temp;
	int		max;
	t_sq	base;
	int		(*process)(struct s_bsq*, char, int [2]);
}	t_bsq;

#endif
