/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:05:22 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/25 10:09:21 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == 32 || (c > 8 && c < 14))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	val;

	val = 0;
	sign = 1;
	while (*str && is_space(*str))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + *str - '0';
		str++;
	}
	return (val * sign);
}
/*
#include<stdio.h>
#include<stdlib.h>

void	test(char *str)
{
	printf("Chaine : {%s}\n", str);
	printf("Resultat ft_atoi : {%d}\n", ft_atoi(str));
	printf("Resultat atoi    : {%d}\n------------\n", atoi(str));
}

int	main(void)
{
	test("-123");
	test("++45678913");
	test("     ---+--+1234ab56");
	test("coucou456");
	test(NULL);
	test("99999999999cc");

}*/
