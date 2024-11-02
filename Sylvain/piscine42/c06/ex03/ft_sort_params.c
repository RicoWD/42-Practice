/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 08:18:54 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/30 09:22:24 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_tab(char **tab, int size)
{
	int		i;
	char	*val;
	int		z;

	if (size < 2)
		return ;
	i = 1;
	while (i < size)
	{
		z = i;
		val = tab[z];
		while (ft_strcmp(tab[z - 1], val) > 0 && z >= 1)
		{
			tab[z] = tab[z - 1];
			z--;
		}
		tab[z] = val;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	argv++;
	if (argc > 2)
	{
		ft_sort_tab(argv, argc - 1);
	}
	i = 0;
	while (i < argc - 1)
	{
		if (*argv[i])
		{
			while (*argv[i])
			{
				write(1, argv[i], 1);
				argv[i]++;
			}
			write(1, "\n", 1);
		}
		i++;
	}
}
