SOLUTION
```bash
echo "git log -5 --pretty=%H" > git_commit.sh
```

`--pretty`  = formate le text
`%H` = Hash (Id du commit complet) 

Attention avec le `format` qui ne fait pas de saut finale à la ligne
```bash
echo "git log -5 --pretty=format:'%H'" > git_commit.sh
```

