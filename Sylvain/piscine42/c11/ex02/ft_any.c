/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:38:04 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/04 10:29:57 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}
/*
#include<stdio.h>

int	is_uppercase(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	}
	return (1);
}

void	test(char **tab)
{
	if (ft_any(tab, &is_uppercase))
		printf("Tab has uppercase\n");
	else
		printf("Tab has no uppercase\n");
}

int	main()
{
	char	*t1[] = {"sssD", "dddj 01", "RRR1"};
	char	*t2[] = {"abcdef00", "AAAAAAGZ", "0123"};
	test(t1);
	test(t2);
	return (0);
}*/
