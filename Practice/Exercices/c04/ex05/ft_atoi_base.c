/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:24:39 by codephenix5       #+#    #+#             */
/*   Updated: 2024/12/06 11:13:25 by codephenix5      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_base_ok(char *base)
{
	int	a;
	int	b;
	int	len;

	a = 0;
	len = 0;
	while (base[len])
		len++;
	if (len <= 1)
		return (0);
	while (a < len)
	{
		if (base[a] == '+' || base[a] == '-' || base[a] <= 32 || base[a] == 127)
			return (0);
		b = a + 1;
		while (b < len)
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}


int	get_base_index(char	str, char *base)
{
	int	k;

	k = 0;
	while (base[k])
	{
		if (str == base[k])
			return (k);
		k++;
	}
	return (-1);
}


int	ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int len;
    int s_count;
	int	result;

	i = 0;
    j = 0;
    s_count = 0;
	result = 0;
	len = 0;
	if (!is_base_ok(base))
        return (0);
	while (base[len])
		len++;
    while (str[j] == ' ' || str[j] == '\t')
        j++;
    while (str[j] == '-' || str[j] == '+')
    {
        if (str[j] == '-')
            s_count++;
        j++;
    }
	while (str[j])
	{
		i = get_base_index(str[j], base);
		if (i == -1)
			break;
		result = result * len + i;
		j++;
	}
	if (s_count % 2 != 0)
        result = -result;
	return (result);
}

#include <stdio.h>

#include <stdio.h>

int main(void)
{
    char str1[100] = "    ---+12546o56631";
    char base1[100] = "0123456789";
    printf("Résultat dans base : %d\n", ft_atoi_base(str1, base1));

    char str2[100] = "    ---+12546o56631";
    char base2[100] = "0123456789";
    printf("Résultat dans base 10 : %d\n", ft_atoi_base(str2, base2));

    char str3[100] = "   +42";
    char base3[100] = "0123456789";
    printf("Résultat dans base 10 : %d\n", ft_atoi_base(str3, base3));

    char str4[100] = "   -2147483648";
    char base4[100] = "0123456789";
    printf("Résultat dans base 10 : %d\n", ft_atoi_base(str4, base4));

    char str5[100] = "    ---+1010";
    char base5[100] = "01";
    printf("Résultat dans base 2 : %d\n", ft_atoi_base(str5, base5));

    char str6[100] = "   1101";
    char base6[100] = "01";
    printf("Résultat dans base 2 : %d\n", ft_atoi_base(str6, base6));

    char str7[100] = "    +1A";
    char base7[100] = "0123456789ABCDEF";
    printf("Résultat dans base 16 : %d\n", ft_atoi_base(str7, base7));

    char str8[100] = "    -FF";
    char base8[100] = "0123456789ABCDEF";
    printf("Résultat dans base 16 : %d\n", ft_atoi_base(str8, base8));

    char str9[100] = "    +BAC";
    char base9[100] = "ABC";
    printf("Résultat dans base personnalisée : %d\n", ft_atoi_base(str9, base9));

    char str10[100] = "   -AABB";
    char base10[100] = "AB";
    printf("Résultat dans base personnalisée : %d\n", ft_atoi_base(str10, base10));

    char str11[100] = "42";
    char base11[100] = "0";
    printf("Base invalide (longueur <= 1) : %d\n", ft_atoi_base(str11, base11));

    char str12[100] = "42";
    char base12[100] = "012345+6789";
    printf("Base invalide (+ dans la base) : %d\n", ft_atoi_base(str12, base12));

    char str13[100] = "42";
    char base13[100] = "01234567890";
    printf("Base invalide (doublons dans la base) : %d\n", ft_atoi_base(str13, base13));

    char str14[100] = "    ---+42Z";
    char base14[100] = "0123456789";
    printf("Caractères invalides dans str : %d\n", ft_atoi_base(str14, base14));

    char str15[100] = "    42.";
    char base15[100] = "0123456789";
    printf("Caractères invalides dans str : %d\n", ft_atoi_base(str15, base15));

    char str16[100] = "";
    char base16[100] = "0123456789";
    printf("Chaîne str vide : %d\n", ft_atoi_base(str16, base16));

    char str17[100] = "42";
    char base17[100] = "";
    printf("Base vide : %d\n", ft_atoi_base(str17, base17));

    char str18[100] = "0";
    char base18[100] = "0123456789";
    printf("Cas particulier 0 dans base 10 : %d\n", ft_atoi_base(str18, base18));

    char str19[100] = "---0";
    char base19[100] = "01";
    printf("Cas particulier 0 avec signe dans base 2 : %d\n", ft_atoi_base(str19, base19));

    char str20[100] = "    -";
    char base20[100] = "0123456789";
    printf("Cas particulier uniquement un signe : %d\n", ft_atoi_base(str20, base20));

    char str21[100] = "    +";
    char base21[100] = "0123456789";
    printf("Cas particulier uniquement un signe : %d\n", ft_atoi_base(str21, base21));

    char str22[100] = "   ";
    char base22[100] = "0123456789";
    printf("Cas particulier uniquement des espaces : %d\n", ft_atoi_base(str22, base22));

    char str23[100] = "2147483647";
    char base23[100] = "0123456789";
    printf("Valeur max d'un int : %d\n", ft_atoi_base(str23, base23));

    char str24[100] = "-2147483648";
    char base24[100] = "0123456789";
    printf("Valeur min d'un int : %d\n", ft_atoi_base(str24, base24));
}
