/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:28:03 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/28 16:54:24 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ' ';
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "TEST";

	printf("z to Z %s\n", ft_strupcase(str));
}
