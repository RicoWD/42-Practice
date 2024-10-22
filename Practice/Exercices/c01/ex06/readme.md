SOLUTION COMPLÈTE
```c
#include <unistd.u>
int     ft_strlen3(char *str)
{
	int     counter;
	counter = 0;
	 while (str[counter]) 
	 counter++; // Ca 
	 return (counter);
 }
```

`while (str[counter])` Je compare la position relative du caractère dans `str`
`counter++;` Revient a augmenter `str` de façon relative

VÉRIFICATION
```c
#include <stdio.h>
int     main(void)
{
int     nb;
	nb = ft_strlen("abcdefghijklmnopqrstuvwxyz\0");
	printf("Longueur = %d \n", nb);
	//OU
	printf("Longueur = %d\n", ft_strlen("abcdefghijklmnopqrstuvwxyz\0"));
}
```
`%d` indique un nombre décimal
`%s` Indique une chaîne de caractère
`%c` Indique un caractère

RAPPEL : 
S'il nous ne l'est pas demandé, ne pas envoyer de `main`.
Surtout s'il fait appel à des fonctions interdites sous peine d'avoir `-42`.

AUTRES SOLUTION COMPLÈTES : 
```C
int     ft_strlen(char *str)
{
	int             counter;
	char    last_letter;
	
	counter = 0;
	last_letter = '\0';
	while (*str > last_letter)
{
	counter++;
	str++; // J'augmente la position de str de façon absolue
}
	return (counter);
}
```

```C
int     ft_strlen2(char *str)
{
	int     counter;
	
	counter = 0;
	while (*(str++))
	counter++;
	return (counter);
}
```

