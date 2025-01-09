/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:09:22 by codephenix5       #+#    #+#             */
/*   Updated: 2025/01/09 14:44:14 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
    int value1 = -42;
    int value2 = 10;

    printf("Valeur absolue de %d : %d\n", value1, ABS(value1));
    printf("Valeur absolue de %d : %d\n", value2, ABS(value2));
    return (0);
}
