SOLUTION
```bash
id -nG $FT_USER | tr ' ' ',' | tr -d '\n'
```

Le pipe `|`  indique l'on va d'abord appliquer dans un même processus avant la sortie les instructions qui sont données dans l'ordre.

La variable `FT_USER` est une variable d'environnement, pour l'utiliser, sans la modifier on fait appel à elle comme ceci `$FT_USER`, si on souhaite la redéfinir, on la rappelle `FT_USER`.

La variable `FT_USER` sera donnée par la Moulinette, qui testera notre script.
