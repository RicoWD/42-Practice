/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:05:34 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/24 11:09:19 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			str[i] = c + 32;
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[20] = "COUCOU ecole 42 !!!";
	printf("Originale : %s\n", str);
	printf("Modif : %s\n", ft_strlowcase(str));
}*/
