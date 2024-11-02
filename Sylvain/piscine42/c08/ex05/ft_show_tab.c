/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:41:10 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/02 14:17:49 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include"ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	long	o;
	char	c;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -1 * n;
	}
	o = 1;
	while (n > (10 * o))
		o = 10 * o;
	while (o > 0)
	{
		c = '0' + (n / o);
		write(1, &c, 1);
		n = n % o;
		o = o / 10;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
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
	int		i;
	t_stock_str	*stock;

	stock = (t_stock_str *)malloc((ac + 1) * sizeof (t_stock_str));
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

#include<stdio.h>

int	main(int ac, char **av)
{
	t_stock_str *stk = ft_strs_to_tab(ac, av);
	ft_show_tab(stk);
	free(stk);
	return (0);
}*/
