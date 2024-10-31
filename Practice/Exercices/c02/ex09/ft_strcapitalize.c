/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:18:12 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/31 16:21:45 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	z;

	i = 0;
	z = -1;
	while(str[i])
	{	
		if(!((str[z] >= 'a' && str[z] <= 'z') || (str[z] >= 'A' && str[z] <= 'Z'))
            && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - ' ';

		if(((str[z] >= 'a' && str[z] <= 'z') || (str[z] >= 'A' && str[z] <= 'Z'))
            && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + ' ';
		i++;
		z++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	string[] = "voici un text sans aucune MAJUSCULE. modifie-le.";

	printf("Capitalization des premières lettres en cours : %s\n", ft_strcapitalize(string));	
}
