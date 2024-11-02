/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:49:17 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/21 19:55:15 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (! (c >= 'A' && c <= 'Z'))
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

	i = ft_str_is_uppercase("AYDYFINJBYVYU");
	printf("Is uppercase : %d\n", i);
	i = ft_str_is_uppercase("UUDUHYVUVIooo");
	printf("is uppercase : %d\n", i);
	return (0);
}*/
