Dans cet exercice, un saut de ligne est attendu à la fin du fichier.


```bash
echo "Z" > z
```

Ecris Z dans le fichier z (le crée s'il n'existe pas).
Echo ajoute automatiquement un \n à la fin de la chaine.

```bash
echo "Z" >> z
```
Ajoute un "Z" à la fin du fichier.


```bash
cat -e z     
```

Lis le fichier z et indique s'il y a un saut de ligne un $ à chaque saut de ligne.
S'il n'y a pas de saut de ligne, il indique un %
