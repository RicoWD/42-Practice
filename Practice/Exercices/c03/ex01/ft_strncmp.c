/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:42:26 by codephenix5       #+#    #+#             */
/*   Updated: 2024/11/04 16:17:30 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	txt1[] = "Hello";
	char	txt2[] = "hello";
	char	txt3[] = "Hello ";
	char	txt4[] = "Hel";
	unsigned int	n = 2;

	printf("Analyse du text : %d\n", ft_strncmp(txt1, txt2, n));
	printf("Analyse du text : %d\n", ft_strncmp(txt1, txt3, n));
	printf("Analyse du text : %d\n", ft_strncmp(txt1, txt4, n));
}
