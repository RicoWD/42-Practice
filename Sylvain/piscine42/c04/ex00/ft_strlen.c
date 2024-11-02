/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:47:58 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/24 12:49:09 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str)
	{
		cpt++;
		str++;
	}
	return (cpt);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("len (abcde) : %d\n", ft_strlen("abcde"));
}*/
