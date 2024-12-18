/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:08:37 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/18 16:35:25 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*copy;

	len = 0;
	while (src[len])
	{
		len++;
	}
	copy = (char *)malloc((len + 1) * sizeof(char));
	
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

int	main(void)
{
	char	*src;
	char	*copied;

	src = "Hello World";
	copied = ft_strdup(src);
	printf("Copy : %s\n", copied);
	free(copied);
}
