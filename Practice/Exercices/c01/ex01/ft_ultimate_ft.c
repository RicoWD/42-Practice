/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:42:14 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/22 11:56:18 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	a;

	a = 5000;

	int	*b = &a;
	int	**c = &b;
	int	***d = &c;
	int	****e = &d;
	int	*****f = &e;
	int	******g = &f;
	int	*******h = &g;
	int	********i = &h;
	int	*********j = &i;

	printf("a vaut : %d\n", a);
	ft_ultimate_ft(j);
	printf("et maintenant : %d\n", a);
}
