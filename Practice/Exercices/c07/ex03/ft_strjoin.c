/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ep <marvin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:04:18 by ep                #+#    #+#             */
/*   Updated: 2025/01/06 12:57:09 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*is_size_empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (empty)
		empty[0] = '\0';
	return (empty);
}

int	lenght_malloc(int size, char **strs, char *sep, int i, int j, int s)
{
	int	len;

	i = 0;
	j = 0;
	s = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			j++;
			len++;
		}
		while ((sep[s]) && (i <= size - 2))
		{
			s++;
			len++;
		}
		i++;
		j = 0;
		s = 0;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;
	int		s;

	if (size == 0)
		is_size_empty();
	i = 0;
	k = 0;
	j = 0;
	s = 0;
	result = malloc(lenght_malloc(size, strs, sep, i, j, s) + 1);
	while (i < size)
	{
		while (strs[i][j])
		{
			result[k] = strs[i][j];
			j++;
			k++;
		}
		while (sep[s] && (i <= size - 2))
		{
			result[k] = sep[s];
			s++;
			k++;
		}
		j = 0;
		i++;
		s = 0;
	}
	result[k] = '\0';
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int		size1;
	char	*strs1[] = {"Voici", "du", "text", "à", "concatener", "!"};
	char	*sep1;

	size1 = 6;
	sep1 = " ";
	printf("Test 1 %s\n", ft_strjoin(size1, strs1, sep1));
}
