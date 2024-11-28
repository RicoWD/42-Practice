/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:53:21 by codephenix5       #+#    #+#             */
/*   Updated: 2024/11/18 16:10:04 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;

	while (dest[i] && i < size)
		i++;
	
	while (src[j])
		j++;
	
	if (size <= i)
		return (size + j);

	k = 0;
	while (src[k] && (i + k) < (size -1))
	{
		dest[i + k] = src[k];
		k++;
	}

	if ((i+k) < size)
		dest[i + k] = '\0'; 

	return (i + j);
}

#include <stdio.h>

int	main(void)
{
	char	dest[60] = "Hello ";
	char	src[] = "Baby, I'm here to prove something";
	unsigned int	size = 30;

	printf("Taille du tampon : %d\n", ft_strlcat(dest, src, size));
	printf("Concaténage des chaines : %s\n", dest);
	return (0);
}
