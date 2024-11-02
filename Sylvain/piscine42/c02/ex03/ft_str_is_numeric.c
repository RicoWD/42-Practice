/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:06:20 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/23 15:54:37 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (! (c >= '0' && c <= '9'))
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
	i = ft_str_is_numeric("0123A456789");
	printf("Is numeric : %d\n", i);
	i = ft_str_is_numeric("0123456789");
	printf("is numeric : %d\n", i);
	return (0);
}*/
