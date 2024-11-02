/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:23:53 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/23 15:39:21 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	if (! (c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

int	is_alpha(char c)
{
	if (! ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

int	is_alphanum(char c)
{
	if (! (is_alpha(c) || (c >= '0' && c <= '9')))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	g;
	char	c;
	char	*sv;

	sv = str;
	g = '\0';
	while (*str)
	{
		c = *str;
		if ((! is_alphanum(g)) && is_alpha(c) && (! is_upper(c)))
			*str = *str - 32;
		if (is_alphanum(g) && is_upper(c))
			*str = *str + 32;
		g = c;
		str++;
	}
	return (sv);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "salut, coMMenT tu vas ? 4Mots quarante-deux; cinquante+et+un";
	printf("Originale : %s\n", str);
	printf("Modifiee : %s\n", ft_strcapitalize(str));
	char	str2[] = "c";
	printf("Originale : %s\n", str2);
	printf("Modifiee : %s\n", ft_strcapitalize(str2));
	char	str3[] = "A";
	printf("Originale : %s\n", str3);
	printf("Modifiee : %s\n", ft_strcapitalize(str3));
	return (0);
}*/
