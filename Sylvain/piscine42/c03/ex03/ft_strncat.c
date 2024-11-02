/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:40:46 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/25 15:22:57 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (dest[len])
		len++;
	i = 0;
	while (i < nb && src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>

void	test(char *dest, char *src, int sz)
{
	printf("ft_strncat : {%s}\n", ft_strncat(dest, src, sz));
	printf("strncat :    {%s}\n-----------\n", strncat(dest, src, sz));
}

int	main(void)
{
	char	s_0[20] = "Hello-\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s_1[20] = "Hello-\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s2[] = "Bla bla bla bla";
	char	s_2[20] = "Hello-\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s_3[20] = "Hello-\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s_4[20] = "Hello-\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	s_5[20] = "Hello-\0\0\0\0\0\0\0\0\0\0\0\0\0\0";

	strcpy(s_2, "AA AA");
	strcpy(s_3, "AA AA");
	printf("ft_strncat : {%s}\n", ft_strncat(s_0, s2, 20));
	printf("strncat :    {%s}\n\n", strncat(s_1, s2, 20));
	printf("ft_strncat : {%s}\n", ft_strncat(s_2, s2, 20));
	printf("strncat :    {%s}\n", strncat(s_3, s2, 20));
	printf("ft_strncat : {%s}\n", ft_strncat(s_4, s2, 5));
	printf("strncat :    {%s}\n", strncat(s_5, s2, 5));
}*/
