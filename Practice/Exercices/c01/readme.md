
| Ce que je veux | Ce que je déclare | Je veux son adresse | Je veux sa valeur |
| -------------- | ----------------- | ------------------- | ----------------- |
| un pointeur    | int *a            | a                   | *a                |
|                | char *s           | s                   | *s                |
| une variable   | int b             | &b                  | b                 |
|                | chat c            | &c                  | c                 |
Exercices Valeur/Référence

```c
int a;
int b;

a = 50;
b = 500;

void toto (int val)
{
	val = -42;
}

void titi (int *val)
{
	*val = 42;
}

toto(a);
toto(&b);

a = 50;
b = 42;
```
`void toto(int val)`est un passage par valeur.
`val=42` est une affectation.
On ne modifie pas la valeur de `a` en l'insérant dans cette variable.

`void titi(int *val)` est un passage par référence le `*` indique que l'on envoie l'adresse de la variable
`*val = 42` remplace la valeur de ce qu'il y a l'adresse par `42`


