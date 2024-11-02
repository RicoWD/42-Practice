/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:22:39 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/02 16:04:13 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h"
#include<stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = (t_stock_str *)malloc((ac + 1) * sizeof (t_stock_str));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}
/*
#include<stdio.h>

int	main(int ac, char **av)
{
	t_stock_str *stk = ft_strs_to_tab(ac, av);
	
	for (int i = 0; stk[i].str; i++)
	{
		printf("Size : %d\n", stk[i].size);
		printf("Str : %s\n", stk[i].str);
		printf("Scopy : %s\n----------\n", stk[i].copy);
	}
	free(stk);
	return (0);
}*/
