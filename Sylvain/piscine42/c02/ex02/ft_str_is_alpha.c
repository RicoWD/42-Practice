/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:55:59 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/21 19:18:46 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (! ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	int	i;
	i = ft_str_is_alpha("Q1sIDyufnHH");
	printf("Chaine : %d\n", i);
	i = ft_str_is_alpha("QsIDyufnHH");
	printf("Chaine : %d", i);
	return (0);
}*/
