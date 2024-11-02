/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhadroug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:18:38 by nhadroug          #+#    #+#             */
/*   Updated: 2024/09/22 12:19:24 by ppradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char start, char middle, char end)
{
	int	j;

	j = 1;
	ft_putchar(start);
	while (j < x - 1)
	{
		ft_putchar(middle);
		j++;
	}
	if (x > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'C');
		while (i < y - 1)
		{
			print_line(x, 'B', ' ', 'B');
			i++;
		}
		if (y > 1)
			print_line(x, 'A', 'B', 'C');
	}
}
