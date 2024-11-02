/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:00:25 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/24 19:20:21 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include<string.h>
#include<stdio.h>

int	main(void)
{
	char	s1[] = "Coucou ";
	char	s2[] = "Coucou";
	char	s3[] = "Coucou\0\0\0";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s3, s2));
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s3, s2));
}*/
