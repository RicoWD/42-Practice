/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:36:34 by codephenix5       #+#    #+#             */
/*   Updated: 2025/01/08 12:37:11 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Pour printf
#include "ft.h"     // Inclusion de ft.h

int main(void)
{
    char str[] = "Hello, World!";
    int a = 42, b = 24;

    // Test ft_putchar
    ft_putchar('A');
    ft_putchar('\n');

    // Test ft_swap
    printf("Avant swap: a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("Après swap: a = %d, b = %d\n", a, b);

    // Test ft_putstr
    ft_putstr("Test de ft_putstr\n");

    // Test ft_strlen
    printf("Longueur de '%s' : %d\n", str, ft_strlen(str));

    // Test ft_strcmp
    printf("Comparaison de 'abc' et 'abd' : %d\n", ft_strcmp("abc", "abd"));
    printf("Comparaison de 'abc' et 'abc' : %d\n", ft_strcmp("abc", "abc"));
    printf("Comparaison de 'abd' et 'abc' : %d\n", ft_strcmp("abd", "abc"));

    return 0;
}

