Pour l'inscription aux examens : 

Il faut s'inscrire à deux endroits : 
1. Comme pour les days dans la "Liste des projets"
2. Dans le calendrier des events sur la page principale

Si on ne le fait pas aux deux endroits, on ne peut pas passer l'examen.

La journée d'examen : 

Dès que l'on met un pied dans la salle, 
- on ne peut plus parler 
- rien dans les poche (ni clés, ni tel)
- pas de chewing gum
- Ne pas toucher ni clavier, ni souris tant que l'exam n'a pas commencé
- Regarder son écran uniquement, ne pas tourner la tête.

- Ramener 
	- 3 feuilles blanches max (pour brouillon)
	- 1 seul stylo
	- 1 bouteille d'eau
	- Carte 42 à poser sur la table
	
- Pour aller aux toilettes (proposé toutes les demi-heures)
	- Laisser la carte sur la table

- Login et MDP : exam/exam
- Vérifier que le mot de passe s'écrit dans le terminal avant de lancer la commande examshell
- Lancer examen, dans le terminal : examshell et se loger avec son propre login/mdp
- Une fois loggé, garder la fenêtre ouverte.
- Des questions sont posées

Documents
- Pour lire tous les documents, le faire via le terminal avec "cat"
- Aller dans Home et trouver la consigne de l'examen (docs/documents...) parce que les consignes peuvent changer.
- Il peut y avoir des dossiers "rendus" et "sujets"
	- Rendu est un dossier git (automatiquement créer) où l'on créera nos programmes
	- Sujet l'emplacement où se trouve les sujets d'examen qui apparaissent après chaque validation.

Ecrivez un programme, la fonction s'appelle main
Ecrire une fonction pas de main

On ne doit rendre que des fichiers C donc, lorsqu'on push notre travail il faut faire : 
```bash
git add *.c
git commit -m "..."
git push
git ls-files 
```

Une fois que l'on est sur de son exercice, on valide son exercice en faisant appel à la moulinette en métant dans le terminal ou se trouve examshell
```bash
grademe
```
et confirmer.

A chaque grademe validé la note s'incrémente.
Tous les examens on la même valeur (10 pour les 3 premiers / 6 pour le dernier)
La difficultée est incrémentale(ment violente). 

Si ce n'est pas valider, on doit corriger et relancer la procédure complète.

Lorsque l'exercice est validé, un nouveau dossier va apparaitre dans le dossier Sujet.

A l'examen, on n'est pas soumis à la Norminette
On ne rend pas de Header
Si on fait des tests dans un script .c on peut les mettre en commentaire mais il ne faut pas les rendre tel.

Il peut y avoir des énoncés piège. TOUJOURS bien lire !
Si par exemple on te demande 
- Ecrire l'alphabet en alternant entre minuscule et majuscule
	- Il suffit d'écrire en brut l'alphabet
		```c
		write(1, aBcDeFgHiJkLmNoPqRsTuVwXyZ\n, 27);
		```
- Bien vérifier la condition (par exemple s'il y a tel lettre rajoute un S...), il faudra bien voir que la consigne t'embrouille et que le résultat est bien simple.

CTRL SHIFT + N : ouvrir terminal au même endroit
