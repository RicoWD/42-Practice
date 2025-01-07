/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ep <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:00:44 by ep                #+#    #+#             */
/*   Updated: 2025/01/07 13:02:23 by codephenix5      ###   ########.fr       */
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
				return(0);
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
			return (k);
		k++;
	}
	return (-1);
}


int	ft_atoi_base(char *str, char *base)
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

char	*int_to_str(int	nbr_int, char *base)
{
	char	*nbr_char;
	int		base_len;
	int		malloc_need;
	int		count_nbr_int;
	int		empty_char;

	base_len = 0;
	malloc_need = 0;
	count_nbr_int = nbr_int;
	empty_char = 0;
	// VÉRIFICATION
	if (nbr_int == 0)
	{
		char	*zero_str = (char *)malloc(2); 
		if (!zero_str)
			return (NULL);
		zero_str[0] = '0';
		zero_str[1] = '\0';
		return (zero_str);
	}

	// DÉCOMPTES
	while (base[base_len])
		base_len++;
	if (nbr_int < 0)
		malloc_need++;
	while (count_nbr_int != 0)
	{
		count_nbr_int = count_nbr_int / base_len;
		malloc_need++;
	}
	nbr_char = (char *)malloc(malloc_need + 1);

	// TRANSFORMATIONS
	if (nbr_int < 0)
	{
		nbr_char[0] = '-';
		nbr_int = -nbr_int;
	}
	while (nbr_int != 0)
	{
		nbr_int = nbr_int % base_len;
		nbr_char[malloc_need] = base[nbr_int];
		malloc_need--;
		empty_char++;
	}
	nbr_char[empty_char] = '\0'; 
	return (nbr_char);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_from;
	char	*nbr_to;

	if (!is_base_ok(base_from) || !is_base_ok(base_to))
		return NULL;
	nbr_from = ft_atoi_base(nbr, base_from);
	nbr_to = int_to_str(nbr_from, base_to);
	return (nbr_to);
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

	printf("Résultat : %s\n", ft_convert_base(nbr, base_from, base_to));
}
