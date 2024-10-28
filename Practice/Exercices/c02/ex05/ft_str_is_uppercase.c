/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:26:40 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/28 15:30:34 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
                return (0);
        i++;
    }
    return (1);
}

#include    <stdio.h>

int main(void)
{
    printf("String minuscule : %d\n", ft_str_is_uppercase("HELLO"));
    printf("String minuscule : %d\n", ft_str_is_uppercase("hello"));
    printf("String majuscule : %d\n", ft_str_is_uppercase("hellO"));
    printf("String minuscule+chiffre : %d\n", ft_str_is_uppercase("hello1"));
    printf("String minuscule+espace : %d\n", ft_str_is_uppercase("hello toi"));
    printf("String espace vide : %d\n", ft_str_is_uppercase(" "));
    printf("String chîne vide : %d\n", ft_str_is_uppercase(""));
}

