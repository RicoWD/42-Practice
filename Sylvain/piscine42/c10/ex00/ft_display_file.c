/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:01:01 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/10 08:15:58 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	read_file(char *fname)
{
	int	fdesc = open(fname, 0);

	if (fdesc == -1)
		return (0xFF);

	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (read_file(av[1]) != 0)
	{
		write(2, "Cannot read file.\n", 18);
	}
	return (0);
}
