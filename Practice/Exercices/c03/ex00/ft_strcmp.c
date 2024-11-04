/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:30:34 by codephenix5       #+#    #+#             */
/*   Updated: 2024/11/04 15:36:18 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i]) 
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	text1[] = "Voici un text";
	char	text2[] = "Voici un text";
	char	text3[] = "Voici un text!";
	char	text4[] = "voici un text";
	char	text5[] = "Voic1 un text";
	char	text6[] = "Voici un text avec encore du text";
	char	text7[] = "Voici";

	printf("Analyse du text 1/2 %d\n", ft_strcmp(text1, text2));
	printf("Analyse du text 1/3 %d\n", ft_strcmp(text1, text3));
	printf("Analyse du text 1/4 %d\n", ft_strcmp(text1, text4));
	printf("Analyse du text 1/5 %d\n", ft_strcmp(text1, text5));
	printf("Analyse du text 1/6 %d\n", ft_strcmp(text1, text6));
	printf("Analyse du text 1/7 %d\n", ft_strcmp(text1, text7));

}
