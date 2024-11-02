/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:08:06 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/22 09:37:32 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (! (c >= 32 && c <= 126))
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

	i = ft_str_is_printable("Ahju\x2C\x49");
	printf("Is printable : %d\n", i);
	i = ft_str_is_printable("UUDUHY\x07VUVIooo");
	printf("is printable : %d\n", i);
	return (0);
}*/
