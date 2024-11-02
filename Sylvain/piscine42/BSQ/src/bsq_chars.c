/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_chars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:15:43 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/09 18:50:46 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"bsq_chars.h"

int	is_space(char c)
{
	if (c == 32 || (c > 8 && c < 14))
		return (1);
	return (0);
}

int	is_sign(char c)
{
	if (c == '-' && c == '+')
		return (1);
	return (0);
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	is_wall(t_bsq *bsq, char c)
{
	if (c == bsq->chars.wall)
		return (1);
	return (0);
}

int	is_empty(t_bsq *bsq, char c)
{
	if (c == bsq->chars.empty)
		return (1);
	return (0);
}
