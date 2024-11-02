/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:40:48 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/21 09:56:09 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int	main(void)
{
	char	src[] = "hello 42";
	char	dst[9];
	char	*resultat;

	printf("Source : {%s}\n", src);
	resultat = ft_strcpy(dst, src);
	printf("Resultat : {%s}\n", resultat);
}*/
