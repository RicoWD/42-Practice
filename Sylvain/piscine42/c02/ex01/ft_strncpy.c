/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:09:37 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/23 15:16:58 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
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
	resultat = ft_strncpy(dst, src, 3);
	printf("Resultat : {%s}\n", resultat);
}*/
