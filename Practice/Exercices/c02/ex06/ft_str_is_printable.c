/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:37:46 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/28 16:19:28 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("Caractères imprimable tout type %d\n", ft_str_is_printable("Salut"));
	printf("Caractères imprimable phrase %d\n", ft_str_is_printable("Salut ! Je fais, un... etit test ;)"));
	printf("Caractères non imprimables intégrès %d\n", ft_str_is_printable("He\31fl\x33lo"));
	printf("Caractères imprimable tout type %d\n", ft_str_is_printable("\n"));
}
