/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:44:44 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/24 19:15:17 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char			*p_dest;

	p_dest = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (p_dest);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	s_0[20] = "ABCD\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s_1[20] = "ABCD\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s_2[20] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s_3[20] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s2[] = "Bla bla bla bla";

	printf("ft_strcat : {%s}\n", ft_strcat(s_0, s2));
	printf("strcat    : {%s}\n\n", strcat(s_1, s2));
	printf("ft_strcat : {%s}\n", ft_strcat(s_2, s2));
	printf("strcat    : {%s}\n", strcat(s_3, s2));
}*/
