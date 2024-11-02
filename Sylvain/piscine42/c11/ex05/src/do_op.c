/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:45:33 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/05 18:52:12 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"do_op.h"

void	*get_opf(char op, int sz)
{
	int	i;

	i = 0;
	while (i < sz)
	{
		if (ops[i].key == op)
			return (ops[i].opf);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	void	(*opf)(int, int);

	if (ac != 4)
		return (0);
	opf = get_opf(av[2][0], 5);
	if (!opf || av[2][1])
	{
		display_msg("0\n");
		return (0);
	}
	opf(ft_atoi(av[1]), ft_atoi(av[3]));
}
