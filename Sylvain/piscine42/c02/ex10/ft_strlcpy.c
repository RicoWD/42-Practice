/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <smaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:13:13 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/25 16:44:18 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((i + 1) < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
#include<stdio.h>
#include<bsd/string.h>

void	test(char *s, char *d, char *d_, int n)
{
	unsigned int	size;
	unsigned int	size2;

	printf("dst, src : {%s} {%s}\n", d, s);
	size = ft_strlcpy(d, s, n);
	size2 = strlcpy(d_, s, n);
	printf("ft_strlcat : {%s}\n", d);
	printf("strlcat    : {%s}\n", d_);
	printf("sz_ft, sz : {%d} {%d}\n----------------\n", size, size2);
}

int	main(void)
{
	char	d1[50] = "Bla bla ";
	char	d2[50] = "Bla bla\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	d3[50] = "ii";
	char	d4[50] = "\0\0Bla bla\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	d1_[50] = "Bla bla ";
	char	d2_[50] = "Bla bla\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char	d3_[50] = "ii";
	char	d4_[50] = "\0\0Bla bla\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	test ("Coucou", d1, d1_, 9);
	test ("Coucou", d2, d2_, 3);
	test ("Coucou", d3, d3_, 0);
	test ("", d4, d4_, 20);
	return (0);
}*/
