/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:25:05 by smaitre           #+#    #+#             */
/*   Updated: 2024/10/08 18:46:40 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	get_nb_words(char *str, char *charset)
{
	int	i;
	int	nb;
	int	sp;

	i = 0;
	nb = 0;
	sp = 1;
	while (str[i])
	{
		if (!is_in_charset(str[i], charset))
		{
			if (sp)
				nb++;
			sp = 0;
		}
		else
			sp = 1;
		i++;
	}
	return (nb);
}

char	**get_main_tab(char *str, char *charset)
{
	char	**main;
	int		nb;

	nb = get_nb_words(str, charset);
	main = (char **)malloc((nb + 1) * sizeof(char *));
	if (main)
	{
		main[nb] = 0;
		return (main);
	}
	else
		return (0);
}

int	write_word(char *str, char **main, int k, char *charset)
{
	int		wlen;
	int		pos;
	char	*mystr;

	wlen = 0;
	while (str[wlen] && !is_in_charset(str[wlen], charset))
		wlen++;
	if (wlen > 0)
	{
		mystr = (char *)malloc((wlen + 1) * sizeof (char));
		if (!mystr)
			return (0);
		mystr[wlen] = 0;
		pos = wlen;
		while (pos-- > 0)
			mystr[pos] = str[pos];
		main[k] = mystr;
	}
	return (wlen);
}

char	**ft_split(char *str, char *charset)
{
	char	**main;
	int		nb;
	int		k;

	main = get_main_tab(str, charset);
	k = 0;
	while (*str)
	{
		while (is_in_charset(*str, charset))
			str++;
		nb = write_word(str, main, k, charset);
		if (nb > 0)
			k++;
		str = str + nb;
	}
	return (main);
}

#include<stdio.h>

int	main(int ac, char **av)
{
	char **tab;

	if (ac != 3)
		exit (1);

	tab = ft_split(av[1], av[2]);
	int i = 0;
	printf("------------------------\n");
	while (tab[i])
	{
		printf("|%s|\n", tab[i]);
		i++;
	}
	printf("------------------------\n");
	free(tab);
	return (0);
}
