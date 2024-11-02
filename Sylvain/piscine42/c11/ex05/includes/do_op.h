/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:07:23 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/05 18:51:39 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

void	op_add(int a, int b);
void	op_rem(int a, int b);
void	op_div(int a, int b);
void	op_mul(int a, int b);
void	op_mod(int a, int b);
void	display_msg(char *msg);
int		ft_atoi(char *str);

struct s_optable
{
	char	key;
	void	(*opf)(int, int);
}	ops[] = {
	{'+', op_add},	
	{'-', op_rem},
	{'/', op_div},
	{'*', op_mul},
	{'%', op_mod}
};

#endif
