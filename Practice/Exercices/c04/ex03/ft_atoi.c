/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:09 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/02 11:50:31 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign_counter;
	int	nbr;

	i = 0;
	sign_counter = 0;
	nbr = 0;

	while (str[i] == ' ')
		i++;

	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign_counter++;
		i++;
	}	
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}

	if (sign_counter % 2 != 0)
	{
		nbr = -nbr;
	}

	return (nbr);
}

#include <stdio.h>

int	main(void)
{
	char	str42[20] = "   ---+--+1234ab567"; 
	char	str0[20] = "12343";
	char	str1[20] = "1234o1223";
	char	str2[20] = "-1234o1223";
	char	str3[20] = "--+1234o1223";
	char	str4[20] = "   -+--+1234o1223";
	char	str5[20] = "   -+--+12 34o1223";

	printf("Rendu 42 %d\n", ft_atoi(str42));
	printf("Rendu 0 %d\n", ft_atoi(str0));
	printf("Rendu 1 %d\n", ft_atoi(str1));
	printf("Rendu 2 %d\n", ft_atoi(str2));
	printf("Rendu 3 %d\n", ft_atoi(str3));
	printf("Rendu 4 %d\n", ft_atoi(str4));
	printf("Rendu 5 %d\n", ft_atoi(str5));

}
