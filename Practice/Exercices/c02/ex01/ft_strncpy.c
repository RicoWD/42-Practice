/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:27:16 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/28 03:02:48 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i=0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dst[10];
	char	src[] = "Hello, I'm here to complète the exercice ex01 of c02";

	printf("After DST %s\n", strncpy(dst, src, 9));
	printf("After DST %s\n", dst);

}


