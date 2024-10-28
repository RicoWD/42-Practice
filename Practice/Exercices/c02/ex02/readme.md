SOLUTION COMPLÈTE (ITÉRATION)
```bash
int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z')
                    || (str[i] >= 'a' && str[i] <= 'z')))
            return (0);
        i++;
    }
    return (1);
}
```


SOLUTION ALTERNATIVE (RÉCURSIVITÉ)
```bash
int ft_str_is_alpha_rec(char *str)
{
    if (*str == '\0')
        return (1);
    if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
        return (0);
    return (ft_str_is_alpha_rec(++str));
}
```
`*str` Ici on cible le caractère en cours
`if (*str == '\0')` Indique ce que l'on fait s'il l'on est en fin de chaîne de caractère.
`return (ft_str_is_alpha_rec(++str));` Incrémente `str` avant de l'envoyer en recursion.

VALIDATION
```bash
void    test(char *str)
{
    int ret;
    ret = ft_str_is_alpha_rec(str);
    printf("Chaine : ~~~|%s|~~~\n", str);
    printf("Cette chaine %s alpha\n\n", ret ? "est" : "n'est pas");
}

int main(void)
{
    test("Hello");
    test("");
    test("Hello, cette fois-ci j'ai des caractères particuliers");
}
```
