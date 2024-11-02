/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:47:34 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/05 12:11:06 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ops.h"

void	op_add(int a, int b)
{
	display_num(a + b);
}

void	op_rem(int a, int b)
{
	display_num(a - b);
}

void	op_div(int a, int b)
{
	if (b == 0)
	{
		display_msg("Stop : division by zero\n");
		return ;
	}
	display_num(a / b);
}

void	op_mul(int a, int b)
{
	display_num(a * b);
}

void	op_mod(int a, int b)
{
	if (b == 0)
	{
		display_msg("Stop : modulo by zero\n");
		return ;
	}
	display_num(a % b);
}
