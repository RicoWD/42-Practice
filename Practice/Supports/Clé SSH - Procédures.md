```bash
ssh-keygen
```

Suivre la procédure indiquée.
```bash
cat .ssh/id_rsa.pub
```

Copier la clé (publique) - sortie du cat
Coller dans les settings > Menu SSH >  de l’intranet 
```bash
ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAAII3o+lwt9si6E5IjpK0x295zNODHDtW8b174PfaSNOQZ ep@MacBook-Pro-de-Eric.local
```

Ajouter la clé sur le terminal du dossier à ajouter : 
```bash
ssh-add ~/.ssh/mbp_ep_git
```
