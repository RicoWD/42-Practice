SOLUTION
```bash
find . -name '*.sh' -exec basename {} .sh \;
```

`find` fonction de recherche dans un répertoire
`.`tous les fichiers (y compris cachés)
`-name` au nom de (dépend de `find`)
`'*.sh'` généricisation du nom de fichier ayant pour extension `.sh` 
`-exec` exécuter une commande sur chacun des fichiers trouvés (dépend de `find`)

`basename arg1 [arg2]` fonction qui renvoie uniquement le nom du fichier dans un path.
Prend un ou deux arguments : 
1. `arg1` : le path
2. `[arg2]`: (optionnel) derniers caractères à tronquer (si existants).

`{}` (arg1) représente le path en cours donné par find.
`.sh` (arg2) 
`\` caractère d'échappement car `;`est un caractère spécial dans shell.
`;` désigne la fin de la commande `exec`

SOLUTION COMPLÈTE & VÉRIFICATION
```bash
# Nécessaire au travail à rendre (2 lignes suivantes)
echo "find . -name '*.sh' -exec basename {} .sh \;" > find_sh.sh
chmod +x find_sh.sh
# Vérif
./find_sh.sh | cat -e
```

`chmod +x find_sh.sh` rend le fichier exécutable
