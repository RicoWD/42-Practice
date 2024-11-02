/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:02:05 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/20 12:07:15 by smaitre          ###   ########.fr       */
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
