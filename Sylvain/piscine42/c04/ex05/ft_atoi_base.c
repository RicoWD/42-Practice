/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 07:40:21 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/26 17:40:37 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == 32 || (c > 8 && c < 14))
		return (1);
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || is_space(base[i]))
			return (-1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

int	seek_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_nb_base(char *nb, char *base, int base_length)
{
	long	val;
	int		i;
	int		e;
	long	n;
	int		len;

	len = 0;
	while (nb[len])
		len++;
	val = 0;
	i = 0;
	while (i < len)
	{
		n = seek_nb(nb[i], base);
		if (n == -1)
			return (0);
		e = i;
		while (++e < len)
			n = n * base_length;
		val = val + n;
		i++;
	}
	return (val);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	val;
	int	base_length;

	if (!str || !*str || !base || !*base)
		return (0);
	base_length = check_base(base);
	if (base_length <= 1)
		return (0);
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
	val = get_nb_base(str, base, base_length);
	return (val * sign);
}

#include<stdio.h>

void	test(char *a, char *b)
{	
	int	n;

	n = ft_atoi_base(a, b);
	printf("\nnb : |%s| -  base : |%s|", a, b);
	printf("\nValeur : %d\n--------------------\n", n);
}

int	main(void)
{
	test("7FFFFFFFk", "0123456789ABCDEF");
	test("7FFFFFFF", "0123456789AB CDEF");
	test("7FFFFFFF", "0");
	test(NULL, "0");
	test("7FFFFFFF", NULL);
	test("80000000", "0123456789ABCDEF");
	test("123456789123456789", "0123456789");
	test(" -+--1234567890", "0123456789");
	test("onooinnfnofooo", "foin");
	test("fnifyiynv", "poneyvif");
	return (0);
}
