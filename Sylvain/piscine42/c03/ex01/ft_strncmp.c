/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:33:10 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/25 15:15:24 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		a = (unsigned char)s1[i];
		b = (unsigned char)s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include<string.h>
#include<stdio.h>

void	test(char *s1, char *s2, int n)
{
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n-------------\n", strncmp(s1, s2, n));
}

int	main(void)
{
	char	s1[] = "Coucou";
	char	s2[20] = "coucou";
	char	s3[20] = "";
	char	s4[] = "\xFF";
	char	s5[] = "\x7F";
	char	s6[] = "";
	test(s4, s5, 1);
	test(s1, s2, 25);
	test(s2, s3, 200);
	test(s3, s6, 0);
	test(s3, s6, 1);
	test(s2, s3, 3);
	test(s1, s2, 0);
	test(s1, s3, 0);
	test(s2, s3, 0);
	test(s2, s1, 12);
	test(s3, s1, 12);
	test(s3, s2, 12);
	test(s2, s1, 3);
	test(s3, s1, 3);
	test(s3, s2, 3);
	test(s2, s1, 0);
	test(s3, s1, 0);
	test(s3, s2, 0);
}*/
