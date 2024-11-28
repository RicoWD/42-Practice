/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:15:10 by codephenix5       #+#    #+#             */
/*   Updated: 2024/11/18 16:22:12 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	str[80] = "Salut, je ne sais pas encore en quoi consiste l'exo.";

	printf("Nombre de caractères : %d\n", ft_strlen(str));
	return (0);
}
