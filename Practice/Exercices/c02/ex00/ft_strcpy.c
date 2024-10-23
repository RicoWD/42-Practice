/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:50:13 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/23 12:00:00 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dst_test[11];
	char	dst[11];
	char	src[] = "abcdefijkl";

	printf("before |%s| |%s|\n", dst_test, dst);
	printf("source |%s|\n", src);
	printf("return ft_strcpy |%s|\n", ft_strcpy(dst, src));
	printf("return test |%s|\n", strcpy(dst_test, src));
	printf("dst_test |%s|\n", dst_test);
	printf("after |%s|\n", dst);


}
