/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:05:28 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/05 09:15:47 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/*
int	is_sup2(char *str)
{
	int	count;

	count = 0;
	while (*(str++))
	{
		count++;
		if (count > 2)
			return (1);
	}
	return (0);
}

#include<stdio.h>

int	main(int c, char **v)
{
	if (c < 2)
		return (0);
	printf("\n\nNb sup a 2 : %d\n\n", ft_count_if(++v, c - 1, &is_sup2));
	return (0);
}*/
