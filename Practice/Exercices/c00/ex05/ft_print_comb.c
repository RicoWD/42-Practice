/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:30:23 by codephenix5       #+#    #+#             */
/*   Updated: 2025/01/10 12:56:37 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	*comb;
	int		i;
	int		j;
	int		k;
	int		p;

	i = 0;
	j = 0;
	k = 0;
	p = 0;
	comb = "";
	while (j < 9)
	{
		if (comb[i] == comb[j] || comb[i] == comb[k] || comb[j] == comb[k])
			k++;
		comb[2] = j;
		while (j < 9)
		{
			if (comb[0] == comb[1] || comb[0] == comb[2] || comb[1] == comb[2])
				j++;
			comb[1] = k;
			while (i < 9)
			{
				if (comb[0] == comb[1] || comb[0] == comb[2] || comb[1] == comb[2])
					i++;
				comb[0] = i;
			}
		}
	}
	while (comb[p])
		write (1, comb[p], 1);
			p++;
	write (1, ' ', 1);
	write (1, ',', 1);
	return 0;
}
