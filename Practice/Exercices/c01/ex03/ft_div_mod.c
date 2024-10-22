/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:59:14 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/22 12:40:51 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

#include <stdio.h>

int	main(void)
{
	int	nb1;
	int	nb2;
	int	result;
	int	rest;	

	nb1 = 1562;
	nb2 = 5;
	result = 0;
	rest = 0;

	printf("Valeurs avant %d %d %d %d\n", nb1, nb2, result, rest);
	ft_div_mod(nb1, nb2, &result, &rest);
	printf("Valeurs après %d %d %d %d\n", nb1, nb2, result, rest);
}
