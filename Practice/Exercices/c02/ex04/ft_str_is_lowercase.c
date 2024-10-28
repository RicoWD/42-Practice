/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:58:21 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/28 15:22:14 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
		
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		i++;
	}
	return (1);
}

#include	<stdio.h>

int	main(void)
{
	printf("String minuscule : %d\n", ft_str_is_lowercase("hello"));
	printf("String majuscule : %d\n", ft_str_is_lowercase("hellO"));
	printf("String minuscule+chiffre : %d\n", ft_str_is_lowercase("hello1"));
	printf("String minuscule+espace : %d\n", ft_str_is_lowercase("hello toi"));
	printf("String espace vide : %d\n", ft_str_is_lowercase(" "));
	printf("String chîne vide : %d\n", ft_str_is_lowercase(""));
}
