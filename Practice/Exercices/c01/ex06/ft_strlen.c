/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:37:39 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/21 14:08:53 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		counter;
	char	last_letter;

	counter = 0;
	last_letter = '\0';
	while (*str > last_letter)
	{
		counter++;
		str++; // J'augmente la position de str de façon absolue
	}
	return (counter);
}

int	ft_strlen2(char *str)
{
	int	counter;

	counter = 0;
	while (*(str++))
		counter++;
	return (counter);
}

int	ft_strlen3(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter]) // Je compare la position relative du caractere dans str
		counter++; // Ca revient a augmenter str de façon relative
	return (counter);
}

#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = ft_strlen("abcdefghijklmnopqrstuvwxyz\0");
	printf("Longueur = %d \n", nb);
	printf("Longueur v2 = %d\n", ft_strlen2("abcdefghijklmnopqrstuvwxyz\0"));
	printf("Longueur v3 = %d\n", ft_strlen3("abcdefgnopqrstuvwxyz\0"));

}
