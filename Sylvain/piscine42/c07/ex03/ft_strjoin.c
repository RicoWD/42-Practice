/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 08:03:10 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/01 14:23:27 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	get_len(char *str)
{
	int	i;

	if (!str || !*str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_count(int size, char **strs, char *sep)
{
	int	row;
	int	count;

	row = 0;
	count = 0;
	while (row < size)
	{
		count += get_len(strs[row]);
		row++;
	}
	if (size < 0)
		return (0);
	count = count + (size - 1) * get_len(sep);
	return (count);
}

int	str_copy(char *d, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	return (i);
}

void	writestr(int size, char **strs, char *sep, char *str)
{
	int	row;
	int	i;

	row = 0;
	i = 0;
	while (row < size)
	{
		i = i + str_copy(str + i, strs[row]);
		if (row < size - 1)
		{
			i = i + str_copy(str + i, sep);
		}
		row++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		count;

	count = get_count(size, strs, sep);
	str = (char *)malloc((count + 1) * sizeof (char));
	str[count] = '\0';
	writestr(size, strs, sep, str);
	return (str);
}
/*
#include<stdio.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0) ;
	argv++;

	char *sep;
	sep = *argv;
	argv++;
	printf("\nsep : |%s|\n\n", sep);
	char *str = ft_strjoin(argc - 2, argv, sep);
	printf("resultat : |%s|\n\n", str);
	free(str);
	return (0);
}*/
