/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:29:45 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/31 16:55:32 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	des[] = "";
	char	src[] = "Voilà le texte à déplacer.";
	unsigned int	size = 5;

	printf("Copie Tronquée : %d\n", ft_strlcpy(des, src, size));
}
