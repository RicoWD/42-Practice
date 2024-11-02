/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:59:35 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/25 14:02:58 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (dest[len])
		len++;
	i = 0;
	while ((i + len + 1) < size && src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	while (src[i])
		i++;
	return (len + i);
}

#include<bsd/string.h>
#include<stdio.h>

void	test(char *d1, char *d2, char *s, int n)
{
	printf("dest & src : {%s} {%s}\n", d1, s);
	printf("strlcat    : {%lu}\n", strlcat(d1, s, n));
	printf("ft_strlcat : {%u}\n", ft_strlcat(d2, s, n));
	printf("strlcat    : {%s}\n", d1);
	printf("ft_strlcat : {%s}\n", d2);
	printf("------------\n");
}

int	main(void)
{
	char	dest1[50] = "Coucou\0\0";
	char	dest2[50] = "Coucou\0\0";
	char	dest3[50] = "Coucou";
	char	dest4[50] = "Coucou";
	char	dest5[50] = "Coucou";
	char	dest6[50] = "Coucou";
	char	dest7[50] = "a\0\0\0";
	char	dest8[50] = "a\0\0\0";
	char	src1[] = " la chaine a coller";
	char	src2[] = "";
	test(dest1, dest2, src1, 12);
	test(dest3, dest4, src1, 80);
	test(dest5, dest6, src2, 80);
	test(dest7, dest8, src1, 0);
	return (0);
}
