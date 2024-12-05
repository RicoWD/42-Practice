/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:24:39 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/05 16:52:59 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_base_ok(char *base)
{
	int	a;
	int	b;
	int	len;

	a = 0;
	len = 0;
	while (base[len])
		len++;
	if (len <= 1)
		return (0);
	while (i < len)
	{
		if (base[a] == '+' || base[a] == '-' || base[a] <= 32 || base[a] == 127)
			return (0);
		b = i + 1;
		while (b < len)
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}


int	get_base_index(char	*str, char *base)
{
	while (str[k] >= '0' && str[k] <= '9')
    {   
        nbr = nbr * base[] + (str[k] - 48);
        k++;
    }
    if (s_count % 2 != 0)
        nbr = -nbr;
    ft_putnbr_base(nbr, base);
    return (nbr);
}


int	ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int len;
    int s_count;
	int	result;

    j = 0;
    s_count = 0;
	result = 0;
	len = 0;
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

#include <stdio.h>

int	main(void)
{
	char	str[100] = "    ---+12546o56631";
	char	base[100] = "01";

	printf("Résultat ft_atoi : %d\n", ft_atoi(str));
	printf("Résultat dans base : %d\n", ft_atoi_base(str, base));
}
