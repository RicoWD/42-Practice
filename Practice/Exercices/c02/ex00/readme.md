SOLUTION COMPLÈTE
```bash
char    *ft_strcpy(char *dest, char *src)
{
    int     i;

	i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
```

`char *ft_strcpy` Fonction de type Char * (chaîne de caractère/pointeur sur un caractère).
`*dest` Pointeur sur le premier caractère de la chaîne de destination.
`*src`Pointeur sur la premier caractère de la chaîne source à copier.
`i++` Incrémente l'index de `1` à la fin de chaque boucle du `while`.
`dest[i] = '\n'` A la fin la boucle l'index sera placé au dernier caractère de la chaîne, après la partie visible, donc on lui indique de rajouter un caractère vide après la fin de la chaîne.

VÉRIFICATION
```bash
#include <string.h>
#include <stdio.h>

int     main(void)
{
	char    dst_test[11];
	char    dst[11];
	char    src[] = "abcdefijkl";

	printf("before |%s| |%s|\n", dst_test, dst);
	printf("source |%s|\n", src);
	printf("return ft_strcpy |%s|\n", ft_strcpy(dst, src));
	printf("return test |%s|\n", strcpy(dst_test, src));
	printf("dst_test |%s|\n", dst_test);
	printf("after |%s|\n", dst);
}
```


`char    dst[11]; char    src[] = "abcdefijkl";` Elle doit être au moins plus grande de 1 ou + par rapport à la partie visible de la chaîne source. l est donc évident que si la chaîne de destination n'a pas la longueur suffisante, il y aura un problème.

`%s` Indique que l'on doit recevoir une chaîne de caractère.

`strcpy(dst_test, src)` Fonction permettant de copier le contenu à partir d'une adresse (src) jusqu'à l'adresse du premier caractère nul rencontré.
I