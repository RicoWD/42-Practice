/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:45:15 by codephenix5       #+#    #+#             */
/*   Updated: 2024/11/13 13:02:08 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < nb)
	{
		if (dest[i])
			i++;
		if (src[j])
	}
}

#include <stdio.h>

int	main(void)
{
	char	dst[] = "Ceci est la dest";
	char	src[] = "Ceci est la source";
	int	nb = 5;
	
	printf("Text complet %s\n", ft_strncat(*dst, *src, nb);
}
