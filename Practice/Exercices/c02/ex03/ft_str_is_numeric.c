/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:27:45 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/28 12:56:49 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("Test string full numbers : %d\n", ft_str_is_numeric("1254546"));
	printf("Test string mixed :  %d\n", ft_str_is_numeric("12353d12"));
	printf("Test string letters :  %d\n", ft_str_is_numeric("hello"));
	printf("Test string letters :  %d\n", ft_str_is_numeric(" "));
	printf("Test string letters :  %d\n", ft_str_is_numeric(""));
}

