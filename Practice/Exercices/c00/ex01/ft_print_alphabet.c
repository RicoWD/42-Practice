/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ep <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:14:41 by ep                #+#    #+#             */
/*   Updated: 2024/10/19 13:47:00 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a	=	a;
	char	z	=	z;
	while (a<z)
	{
		write(1 ,%c , 26);
		a++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
