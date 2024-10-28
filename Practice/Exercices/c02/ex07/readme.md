SOLUTION COMPLÈTE
```c
char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ' ';
        i++;
    }
    return (str);
}
```

VÉRIFICATION
```C
#include <stdio.h>

int main(void)
{
    char    str[] = "TEST";

    printf("z to Z %s\n", ft_strupcase(str));
}
```

`char    str[] = "TEST";` Cette chaîne étant destinée à être modifiée, il faut déclarer une variable afin qu'elle ait une adresse non verrouillée ou se placer.
