SOLUTION COMPLÈTE
```c
#include <unistd.h>
 void    ft_putchar(char c)
 {
        write(1, &c, 1);
 }
```


VÉRIFICATION (ne doit pas apparaître)
```c
 int     main(void)
 {
         ft_putchar('c');
         ft_putchar('\n');
         return (0);
 }
```

`void` type vide
`ft_putchar` est une fonction
`char` caractère
`write` fonction qui permet d'écrire. Elle possède trois argument
- `(1` pour sortie normale (stdout) ou `(2` pour sortie erreur `(0` pour entrée (stdin)
- `&c` type : caractère ou `&s` type : chaîne de caractère ou `&d` type : nombre
- `1`longueur allouée.
	- Si elle est inférieur à celle dont on a besoin, le retour sera tronqué
	- Si elle est supérieur, on aura alloué trop de mémoire et des chaînes de caractères pourront être allouées.

`int` type integer (renvoie un nombre entier)
`main` désigne LE programme. Il ne peut y en avoir qu'un dans tous les fichiers lié à un même programme.
`return (0)`par convention POSIX indiquant que tout s'est bien déroulé.