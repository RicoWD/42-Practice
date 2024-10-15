Première colonne : indique le type d'élément : 
- d : directory (dossier)
- l : lien symbolique

Pour modifier une date (d'un fichier ou dossier):
```bash
touch -t 202406052220 nom_fichier
```

Adaptation avec les lien symboliques : 
```bash
touch -mht 202406052220 nom_fichier
```

Pour modifier les permissions (à faire en dernier):
4 = r
2 = w
1 = x

Pour 3 groupes : 
u = user
g = groupe
o = other
(a= all)

Pour donner une taille au fichier (compléter si pas assez ou couper si trop) on utilise: 
```bash
truncate -s xx nom-fichier 
```

