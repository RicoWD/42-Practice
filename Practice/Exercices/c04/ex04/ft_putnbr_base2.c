/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:49:41 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/03 12:16:24 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char nbr_c)
{
    write (1, &nbr_c, 1);
}

int	is_base_ok(char *base)
{
	int	i, j;
	int base_len;

	base_len = 0;

	while (base[base_len])
		base_len++;

	if (base_len < 2)
		return (0);

	i = 0;
	while (i < base_len)
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 31 || base[i] >= 127)
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
	if (!is_base_ok(base))
		return;
	if (is_base_ok(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		int	k;

		k = 0;
		while (base[k])
		{
			k++;
		}
		if (nbr >= 10)
			ft_putnbr_base(nbr / 10, base);
		ft_putchar(nbr % k);	
	}
}

int	main(void)
{
	ft_putnbr_base(1991, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(1991, "01");
	ft_putchar('\n');
	ft_putnbr_base(-1991, "0123456789ABCDEF");
	ft_putchar('\n');
	return (0);
}
