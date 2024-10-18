Prompt terminal pour indiquer dossiers en cours et les dossiers git
`ohmyzsh`

```sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"```

La première fois il faudra créer une clé SSH dont tu collera la partie public dans ta page intranet, tu trouvera un emplacement dédié. Normalement y a une video pour générer ta clé et copier la partie publique.

  

Système de points corrections: 
- +1 pt par utilisateur corrigé
- -1 pt par correction demandée

Utiliser fréquemment :
`tree`
`pwd`
`ls, mkdir, cd, chmod, touch, rm -rf,…`
`git add`
`git ls-files`
`git init`
`git clone <url> dossier`
`git remote add origin <url>`
`git remote set-url origin <url>`
`git push -u origin main`

  

Quand tu fait un days c00, c01 …. c13, on te donne un lien git (voguesphere) sur ta page intranet, tu copies ce lien, tu vas la ou tu veux mettre tes days locaux et tu fais exemple pour le Day 1:  
```bash
cd /le/bon/dossier/
git clone (colle le lien) c01

#Chaque exercice dans le dossier git genre ex00 ex01 ….  
#et chaque fichier au nom demandé dans l’énoncé dans le bon dossier
```


```bash
Tu peux additionner commit et push autant que tu veux  
généralement place toi à la racine de ton `git`  
git add *.c  
(ou *.sh *.c *.h Makefile si besoin)
```

```bash
git commit -m  'mon exo que j’aime'
```

```bash 
git push
```


Une fois que tu as validé ton Day tu peux plus le push et tu as 24h pour demander 2 corrections

Après les 2 corrections (et les feedback des évaluateurs), il sera passé à la moulinette automatiquement.

3 cas se présentent :

- Tout est ok. Dans ce cas tu passe au Day suivant en t’enregistrant au Day suivant dans l’intranet et rebelotte git clone nouveau lien bla bla bla
- Le Day est validé mais tu n’es pas satisfait a 100% de ton travail. 
- Le Day n’est pas validé et par conséquent est refusé (fail).

Dans ces 2 derniers cas, il faut se réinscrire un Day et obtenir un nouveau lien git.

Si tu ne veux pas recloner et déplacer ou créer un nouveau dossier, tu vas préférer utiliser ton dossier de travail dans lequel tu étais déjà, donc tu vas mettre à jour l’url distance du git :  
git remote set-url origin (url du nouveau git)  

Lancer la norminette en mode watch : 
```bash
watch -n 1 norminette -R CheckForbiddenSourceHeader
```

Ajouter le leader 42 dans un fichier .c ou .h : `fn+F1`
Ou `:Stdheader`

  `
`**~** cat .vimrc`
Dans Home, si .vimrc n’existe pas , le créer et y ajouter les ligne suivantes
set tabstop=4       " Définir la largeur d'une tabulation à 4 colonnes
set shiftwidth=4    " Définir la largeur de l'indentation automatique à 4
set noexpandtab     " Ne pas convertir les tabulations en espaces

Approximations niveau C examen : 
- Semaine 1 : C03
- Semaine 2 : C04
- Semaine 3  : C06/07
- Semaine 4 : Tout

Pour compiler : 

```bash 
cc -Wall -Wextra -Werror *.c
```

```bash
cc -Wall -Wextra -Werror *.c -o nom-du-fichie
```

Sur Ubuntu pour lancer la Norminette directement via le fichier .c sur VIM en appuyant sur `F2`. Il faut créer le chemin d’accès et le fichier norminette.vim
```bash
mkdir -p ~/.vim/after/plugin/
cd $_
touch norminette.vim
open norminette.vim
```

`mkdir -p` créer une imbrication de dossiers
`$_`est une copie de l'argument précédent
`cd $_` se déplace vers le dossier (imbriqué) crée précédemment

Il faudra ensuite copier ces lignes ! 

LINUX
```vim
noremap <F2> :update<CR>:execute 'silent !bash -c ''setsid x-terminal-emulator -e bash -c "watch -n 1 norminette -R CheckForbiddenSourceHeader ' . shellescape(expand('%')) . '" >/dev/null 2>&1 < /dev/null &'''<CR>:redraw!<CR>
```

MAC
```vim
nnoremap <F2> :update<CR>:execute 'silent !osascript -e ''tell application "Terminal" to do script "cd ' . shellescape(getcwd()) . ' && watch -n 1 norminette -R CheckForbiddenSourceHeader ' . shellescape(expand('%')) . '"'' &'<CR>:redraw!<CR>
```

Voxotron : Permet de voter pour 10 piscineux (3 semaines)