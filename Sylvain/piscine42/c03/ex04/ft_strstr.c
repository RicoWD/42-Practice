/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:12:48 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/24 19:46:11 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	if (!to_find[0])
		return (str);
	len = 0;
	while (to_find[len])
		len++;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] && str[i + j])
			j++;
		if (j == len)
			return (str + i);
		i++;
	}
	return ((void *) '\0');
}
/*
#include<stdio.h>
#include<string.h>

void	test(char *s, char *r)
{
	printf("Chaine : {%s}\n", s);
	printf("Motif : {%s}\n", r);
	printf("strstr : {%s}\n", strstr(s, r));
	printf("ft_strstr : {%s}\n\n", ft_strstr(s, r));
}

int	main(void)
{
	char	str[] = "Ma chaine ou il faut chercher";
	char	r1[] = "";
	char	r2[] = "fau";
	char	r3[] = "Ma super recherche plus grande que la chaine";

	test(str, r1);
	test(str, r2);
	test(str, r3);
	return (0);
}*/
