/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ep <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:00:44 by ep                #+#    #+#             */
/*   Updated: 2025/01/06 16:57:09 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_base_ok(char *base)
{
	int	a;
	int	b;
	int len;

	a = 0;
	len = 0;
	while (base[len])
		len++;
	if (len <= 1)
		return (0);
	while (a < len)
	{
		if (base[a] == '+' || base[a] == '-' || base[a] <= 32 || base[a] >= 127)
			return (0);
		b = a + 1;
		while (b < len)
		{
			if (base[a] == base[b])
				return(0)
			b++;
		}
		a++;
	}
	return (1);
}

int	get_base_index(char str, char *base)
{
	int k;

	k = 0;
	while (base[k])
	{
		if (str == base[k])
			return[k];
		k++;
	}
	return (-1);
}


int	ft_atoi_base(*str, char *base)
{
	int	i;
	int	j;
	int	len;
	int s_count;
	int result;

	i = 0;
	j = 0;
	len = 0;
	s_count = 0;
	result = 0;
	if (!is_base_ok(base))
		return (0);
	while (base[len])
		len++;
	while (str[j] == ' ' || str[j] == '\t')
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			s_count++;
		j++;
	}
	while (str[j])
	{
		i = get_base_index(str[j], base);
		if (i == -1)
			break;
		result = result * len + i;
		j++;
	}
	if (s_count % 2 != 0)
		result = -result;
	return (result);
}


char	*ft_convert_base(char *nbr, char *base_from, char base_to)
{
	if (!is_base_ok(base_from) || !is_back_ok(base_to))
		return NULL;

	return (nbr);

}


#include <stdio.h>

int	main(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "-1234";
	base_from = "0123456789";
	base_to = "01";

	printf("Résultat : %s\n", ft_convert_base(nbr, base_from, base_to);
}
