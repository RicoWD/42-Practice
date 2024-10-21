SOLUTION COMPLÈTE
```c
void    ft_swap(int *a, int *b)
{
	int     c;

	c = *a;
	*a = *b;
	*b = c;
}
```

`int *a`  Déclaration du pointeur.
`c` Indique la valeur de la variable.
`*a` Indique la valeur du pointeur.

VÉRIFICATION
```c
int     main(void)
{
	int     one;
	int     two;

	one = 1;
	two = 2;

	printf("Integers %d %d\n", one, two);
	ft_swap(&one, &two);
	printf("Integers %d %d\n", one, two);
	return (0);
}
```

`%d` Indique une décimale