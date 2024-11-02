/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:44:48 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/21 19:51:48 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (! (c >= 'a' && c <= 'z'))
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

	i = ft_str_is_lowercase("dgnuwrighHw");
	printf("Is lowercase : %d\n", i);
	i = ft_str_is_lowercase("hfaufeowgjrioh");
	printf("is lowercase : %d\n", i);
	return (0);
}*/
