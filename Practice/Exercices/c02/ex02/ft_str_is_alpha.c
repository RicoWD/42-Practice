/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:36:24 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/25 12:43:16 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
					|| (str[i] >= 'a' && str[i] <= 'z'))) 
			return (0);
		i++;	 
	}
	return (1);
}


int	ft_str_is_alpha_rec(char *str)
{
	if (*str == '\0')
		return (1);
	if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		return (0);
	return (ft_str_is_alpha_rec(++str));
}

#include <stdio.h>

void	test(char *str)
{
	int	ret;
	ret = ft_str_is_alpha_rec(str);
	printf("Chaine : ~~~|%s|~~~\n", str);
	printf("Cette chaine %s alpha\n\n", ret ? "est" : "n'est pas");
}

int	main(void)
{
	test("Hello");
	test("");
	test("Hello, cette fois-ci j'ai des caractères particuliers");
}
