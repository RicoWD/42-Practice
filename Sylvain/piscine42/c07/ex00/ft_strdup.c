/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:30:07 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/30 19:26:29 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof (char));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
/*
#include<string.h>
#include<stdio.h>

void	test(char *str)
{
	char	*s1;
	char	*s2;
	s1 = ft_strdup(str);
	s2 = strdup(str);
	printf("|%s|\n", s1);
	printf("|%s|\n------------------\n", s2);
	free(s1);
	free(s2);
}

int	main(void)
{
	test("Coucou");
	test("");
	test("oooooooooooooo\x81ooooooooo");
}*/
