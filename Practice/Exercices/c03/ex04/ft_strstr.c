/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:44:33 by codephenix5       #+#    #+#             */
/*   Updated: 2024/11/14 16:48:21 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;

	if (!to_find[0])
		return (str);

	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void) {
    char haystack[] = "Voici le panel, de tous les caractères";
    char needle[] = "les";

    // Déclarer la variable 'result' pour stocker le retour de ft_strstr
    char *result = ft_strstr(haystack, needle);

    if (result != NULL) {
        printf("Emplacement de l'aiguille '%s' dans la botte de foin à la position %ld\n", needle, result - haystack);
    } else {
        printf("La sous-chaîne '%s' n'a pas été trouvée.\n", needle);
    }
    return 0;
}
