/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:49:41 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/04 13:01:33 by codephenix5      ###   ########.fr       */
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

void    ft_putnbr(int nbr, char *base, int k)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= k)
		ft_putnbr(nbr / k, base, k);
	ft_putchar(base[nbr % k]);
	return;
}

void    ft_putnbr_base(int nbr, char *base)
{
	if (!is_base_ok(base))
		return;
	
	int k;

	k = 0;
	while (base[k])
		k++;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return;
	}
	ft_putnbr(nbr, base, k);
}

int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-42, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(42, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(42, "");
	ft_putchar('\n');
	ft_putnbr_base(42, "0");
	ft_putchar('\n');
	ft_putnbr_base(42, "00123");
	ft_putchar('\n');
	ft_putnbr_base(42, "012+345");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(2147483648, "0123456789");
	ft_putchar('\n');
	return (0);
}
