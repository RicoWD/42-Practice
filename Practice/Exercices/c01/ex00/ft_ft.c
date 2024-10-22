/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:25:42 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/22 11:41:38 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;	
}

#include <stdio.h>

int	main(void)
{
	int	a;

	a = 1991;
	printf("Avant modification %d\n", a);
	ft_ft(&a);
	printf("Après modification %d\n", a);
}
