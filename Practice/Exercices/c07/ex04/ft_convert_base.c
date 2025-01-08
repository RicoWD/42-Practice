/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ep <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:00:44 by ep                #+#    #+#             */
/*   Updated: 2025/01/08 12:13:02 by codephenix5      ###   ########.fr       */
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
	int		i;
	int		tmp;

	base_len = 0;
	malloc_need = 0;
	count_nbr_int = nbr_int;
	if (nbr_int == 0)
	{
		nbr_char = (char *)malloc(2);
		if (!nbr_char)
			return (NULL);
	nbr_char[0] = '0';
	nbr_char[1] = '\0';
	return (nbr_char);
}

	// DÉCOMPTES
	while (base[base_len])
		base_len++;
	if (nbr_int < 0)
		malloc_need++; //Pour '-'
	while (count_nbr_int != 0)
	{
		count_nbr_int = count_nbr_int / base_len;
		malloc_need++; //Pour chaque chiffre
	}
	malloc_need++; //Pour '\0'
	nbr_char = malloc((sizeof(*nbr_char) * malloc_need));
	if (!nbr_char)
		return (NULL);

	// TRANSFORMATIONS
	if (nbr_int < 0)
	{
		nbr_char[0] = '-';
		nbr_int = -nbr_int;
	}
	i = malloc_need - 2;
	while (nbr_int != 0)
	{
		tmp = nbr_int % base_len;
		nbr_char[i] = base[tmp];
		nbr_int = nbr_int / base_len;
		i--;
	}
	nbr_char[malloc_need - 1] = '\0'; 
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
	if (!nbr_to)
		return (NULL);
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

	printf("Résultat 1 : %s\n", ft_convert_base(nbr, base_from, base_to));
    printf("Résultat 2 : %s\n", ft_convert_base("12F2","0123456789ABCDEF", "0123456789"));

}
