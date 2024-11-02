/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:14:36 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/26 17:31:17 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	if (!base || !*base)
		return (-1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
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

void	putnbr_base(int nbr, char *base, int base_length)
{
	int	n;

	if (nbr == 0)
		return ;
	n = nbr % base_length;
	if (n < 0)
		n = -n;
	putnbr_base(nbr / base_length, base, base_length);
	write(1, &base[n], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;

	base_length = check_base(base);
	if (base_length <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
	}
	putnbr_base(nbr, base, base_length);
}

void	test(int n, char *base)
{	
	ft_putnbr_base(n, base);
	write(1, "\n", 1);
}

int	main(void)
{
	test(-2147483648, "poneyvif");
	test(-2147483648, "0");
	test(8888888, "poneey");
	test(123456789, "poneyvif");
	test(123456789, "foin");
	test(-2147483648, "0123456789ABCDEF");
	test(2147483647, "0123456789ABCDEF");
	test(5840, "abc+");
	test(0x80000000, "01");
	test(0, "123");
	test(456789, NULL);
	return (0);
}
