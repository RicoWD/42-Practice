/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:20:27 by codephenix5       #+#    #+#             */
/*   Updated: 2024/11/04 17:01:08 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		if (dest[i] == '\0')
			i++;
	}
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	char	des[] = "Bon";
	char	src[] = "jour";

	printf("Mot joint : %s\n", ft_strcat(des, src));
}
