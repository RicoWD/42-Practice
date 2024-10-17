SOLUTION
```bash
ifconfig | grep ether | cut -w -f 3
```

`ifconfig` interface informations réseaux
`|`redirige vers une autre sortie
`grep` recherche le mot qui suit 
`ether` ligne des adresses MAC
`cut` découpe le rendu en groupe (split)
`-w` en fonction des espaces
`-f` affiche le groupe (numéro attendu)
`3` groupe qui est affiché

SOLUTION COMPLÈTE
```bash
echo "ifconfig | grep ether | cut -w -f 3" > MAC.sh
chmod +x MAC.sh
```

