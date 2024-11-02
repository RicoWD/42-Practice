/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:40:00 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/22 10:03:48 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			str[i] = c - 32;
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[20] = "Coucou ecole 42 !!!";
	printf("Originale : %s\n", str);
	printf("Modif : %s\n", ft_strupcase(str));
}*/
