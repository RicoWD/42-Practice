/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_print_program_name.c							:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: codephenix5 <marvin@42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/12/13 09:23:21 by codephenix5	   #+#	  #+#			  */
/*	 Updated: 2024/12/13 09:55:00 by codephenix5	  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char**argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
