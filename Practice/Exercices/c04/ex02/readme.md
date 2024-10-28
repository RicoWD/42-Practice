SOLUTION COMPLÈTE
```bash
void    ft_putnbr(int nb)
{
    char    nb_c;
    long    nb_l;

    nb_l = nb;
    if (nb_l < 0)
    {
        write (1, "-", 1);
        nb_l = -nb_l;
    }
    if (nb_l >= 10)
        ft_putnbr(nb_l / 10);
    nb_c = (nb_l % 10) + 48;
    write (1, &nb_c, 1);
}
```

`long` peut contenir tous les `int` qu'ils soient négatifs ou positifs. Le cas échéant la valeur -2147483648 (0x80000000) (plus petit `int` ne sera pas pris en compte)

`write (1, "-", 1)` ajoute le symbole `-` au nombre
`nb_l = -nb_l;` car ici on prend l'opposé du nombre (on le rend positif)
On affichera donc le signe `-` suivi d'une suite de chiffre mis en positif.

VÉRIFICATION
```bash
#include <stdio.h>

void    tes_nbr(int nb)
{
    ft_putnbr(nb);
    write(1, "\n", 1);
}

int main(void)
{
    tes_nbr(0x7fffffff);
    tes_nbr(0x80000000);
    tes_nbr(0x80000000 + 1);
    tes_nbr(0xffffffff);
    tes_nbr(42);
    tes_nbr(458529);
    tes_nbr(1);
    tes_nbr(-1);
    tes_nbr(0);
    tes_nbr(-17995);
    return (0);
}
```