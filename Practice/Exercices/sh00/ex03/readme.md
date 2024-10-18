CONSIGNE
Copier votre clé SSH dans le fichier `id_rsa_pub`

SOLUTION
`# Il s'agit de la solution de l'ex03 de la promo de Sylvain et non de celle qui est dans sujets fournis`
```bash
# Il faut évidement avoir créer une clé SSH
# Se placer dans le dossier de l'exercice à rendre
cd dossier/ex03
cp ~/.ssh/id_rsa.pub id_rsa_pub 
```

Rappel
Il fallait créer auparavant sa clé SSH avec la commande 
```bash
ssh-keygen
```
En principe cette clé devrait être crée dans le dossier `~/.ssh` si ce n'est pas le cas, après vérification, recréer la clé en précisant le dossier et le nom de la clé. Mais normalement, quand on se contente de valider en appuyant sur `Entrée` le nom automatiquement attribué est `~/.ssh/id_rsa.pub`

Cette clé (partie publique) doit être absolument copiée dans l'intranet 42 : 
`epascual > Settings >  Key SSH`