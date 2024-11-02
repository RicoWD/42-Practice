# Énoncé

| Exercice : 00                                     |
| ------------------------------------------------- |
| rush-01                                           |
| Dossier de rendu : ex00/                          |
| Fichiers à rendre : Tous les fichiers nécessaires |
| Fonctions Autorisées : write, malloc, free        |
• Votre code source sera compilé par la commande : cc -Wall -Wextra -Werror
-o rush-01 *.c
• Votre dossier de rendu devra contenir tout ce qui sera nécessaire à la compilation de votre programme.
• Créez un programme qui résoud le problème suivant :
• Sur une map de 4 par 4, placez des caisses de taille 1 à 4 de manière à ce que chaque ligne et colonne voie le bon nombre de caisses de chaque point de vue possible.
• Exemple : la caisse de taille 3 cache ici la caisse de taille 1, ce qui fait qu’il n’y a que 3 boites visibles de la gauche. De la droite, la caisse de taille 4 cache toutes les autres caisses, il y a donc une seule caisse de visible.
• Chacun des vues (deux par ligne et deux par colonne) aura une valeur donnée, allant de 1 à 4. Votre programme doit placer les caisses correctement, tout en faisant attention à n’avoir qu’une seule caisse de chaque hauteur sur chaque ligne et colonne.
• Si il y a plusieurs solution, vous devez afficher la première que vous trouverez.
• Le programme sera lancé de la façon suvante :
```
> ./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left
row3left row4left row1right row2right row3right row4right"
```
• (cf. annexe 1)
• col1up correspond à la valeur pour le point de vue du haut de la colonne de gauche.
Chaque valeur doit être comprise entre 1 et 4.
• Vous ne devez accepter que les inputs respectant ce format. Tout autre format doit
être considéré comme une erreur.
• Vous devrez afficher en sortie la résolution comme suit :
```
>./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$
```
• (cf. annexe 2 et 3)
• En cas d’erreur ou si vous ne trouvez pas de solution, vous écrirez seulement "Error" suivi d’un retour à la ligne.
• Si vous voulez des points bonus essayez de gerer d’autre taille de map (jusqu’a 9x9 ? ?).
• Si la partie obligatoire ne passe pas les tests vous aurez 0.
# Démonstration

```
Repo Git : Practice42/Work/Rush/rush01/ex00  (main *) $ cc -Wall -Wextra -Werror -o rush-01 *.c
Repo Git : Practice42/Work/Rush/rush01/ex00  (main *) $ ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
Repo Git : Practice42/Work/Rush/rush01/ex00  (main *) $ 
```
# Explications

### Algorithme de résolution de grille (puzzle de type grille)

#### 1. Initialisation
- **Créer une grille**: Alloue un tableau 2D initialisé à `'\0'` pour représenter la grille du puzzle. La taille de la grille est déterminée par `size`.

#### 2. Fonction `solve`
- **Entrée**: taille de la grille (`sz`), indices (`inputs`), grille actuelle (`board`).
- **Processus**:
  - Copie la grille actuelle pour éviter de modifier l'état initial pendant la résolution.
  - Itère sur chaque cellule de la grille. Si une cellule est vide (représentée par `'\0'`):
    - Tente de résoudre la grille à partir de cette cellule en appelant la fonction `try_numbers`.

#### 3. Fonction `try_numbers`
- **Processus**:
  - Pour chaque nombre possible de 1 à `size`:
    - Place le nombre dans la cellule actuelle.
    - Vérifie si ce placement est valide avec les fonctions `is_duplicated` et `is_invalid`.
    - Si le placement est valide, appelle récursivement `solve`.
    - Si la récursion retourne une solution (grille complète et valide), termine et renvoie cette grille.
  - Si aucun nombre n'est valide, retourne `NULL` pour indiquer l'échec.

#### 4. Validation
- **`is_invalid`**:
  - Vérifie les contraintes spécifiques liées à la position de la cellule (par exemple, fin de ligne ou colonne) en utilisant des fonctions comme `is_invalid_left`, `is_invalid_right`, `is_invalid_up`, `is_invalid_down`.

#### 5. Retour
- **Sortie**:
  - Si une solution complète est trouvée, elle est retournée à la fonction appelante.
  - Sinon, la fonction libère la mémoire allouée et retourne `NULL`.

#### 6. Nettoyage
- Après la tentative de résolution, si une solution est trouvée, elle est affichée. Sinon, affiche une indication d'échec.

Pour un jeu où il faut évaluer la visibilité des "tours" dans une grille, voici une fiche algorithmique des fonctions de vérification sans détailler les entrées, mais en se concentrant sur les principes et méthodes utilisées :


#### Vérification des duplications (`is_duplicated`)
**Principe** : Cette fonction s'assure qu'un chiffre donné ne se répète pas dans la même ligne ou colonne, à l'exception de sa position actuelle.
- **Méthode** : Parcourir les éléments de la ligne et de la colonne spécifiées, en excluant la position actuelle du chiffre, pour vérifier l'absence de répétitions.

#### Vérification de la visibilité depuis la gauche (`is_invalid_left`)
**Principe** : Contrôler que le nombre de tours visibles depuis la gauche correspond aux attentes basées sur les indices donnés.
- **Méthode** : Parcourir les éléments de la ligne de gauche à droite, en tenant compte des tours qui dépassent en hauteur les précédentes observées, et comparer le total avec l'indice de visibilité prévu.

#### Vérification de la visibilité depuis la droite (`is_invalid_right`)
**Principe** : Assurer la conformité du nombre de tours visibles depuis la droite de la ligne.
- **Méthode** : Identique à la vérification depuis la gauche mais en inversant la direction de parcours, c'est-à-dire de droite à gauche.

#### Vérification de la visibilité depuis le haut (`is_invalid_up`)
**Principe** : Confirmer que le nombre de tours visibles depuis le haut de la colonne est conforme aux indices.
- **Méthode** : Parcourir la colonne de haut en bas, en comptant les tours qui sont plus hautes que toutes celles précédemment comptées, et vérifier ce total contre l'indice donné.

#### Vérification de la visibilité depuis le bas (`is_invalid_down`)
**Principe** : Vérifier que la visibilité des tours depuis le bas de la colonne respecte les indices fournis.
- **Méthode** : Procéder comme pour la vérification du haut mais en commençant du bas de la colonne et en remontant vers le haut.

