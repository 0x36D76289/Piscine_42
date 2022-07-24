
# main.c
- Regarder si on a 1 ou 2 argument (si ca ne remplie pas les conditions alors on affiche un message d'erreur)
  - Si on en a 1, alors verifie si ft_atoi le gere, si oui alors on prend la path du dict par defaut et on  le convertie en consequence.
  - Si on en a 2, alors verifie si ft_atoi gere le 1er arguments et on verifie si le dictionnaire est valide,si les deux conditions sont reunie alors on affiche la convertion en consequence

# dict_check.c
- On regarde si le fichier existe, si oui alors on verifie si chaque ligne non vide correspond au format suivant `[a number][0 to n spaces]:[0 to n spaces][n'importe quel caractere imprimable]\n`
  - Pour faire cela on fait independament dans la chaque ligne le pseudo code suivant
  ```.c 
  pour ligne allant de 0 jusqua la fin du fichier:
    - pour caractere_de_la_ligne on passe chaque espace:
        si caractere_de_la_ligne arrive en fin de ligne (\n) alors on passe a la ligne suivante.
    - pour caractere_de_la_ligne ligne on ajoute chaque caractere on les ajoute dans une liste de char jusqua ce que l'on voit un espace.
        Si on voit un \n alors on renvoie un message d'erreur et on quite le programme.
    - si la chaine de caractere qui suit ne correspond pas a celle la " : " alors on renvoie un message d'erreur et on quite le programme.
  ```

# conv_dict_struct
- Apres voir verifier si le dictionnaire etait valide alors on refait un parcour de ce dernier et
  - on ajoute chaque caractere pris par atoi dans le tableau de t_dict au tableau de char num
  - on passe le separateur
  - on ajoute chaque caractere (jusqu'a un espace voir un ou un \n) dans le tableau de char word de t_dict
    (on supprimera les derniers espaces a la fin de cette chaine au prealable)

# conv_base_dict;
- Avec le tableau de structure aue nous avons creer alors nous alons prendre chaque caractere a l'`index` x et la chaine alors lequel nous l'ajouterons avec (x - ft_strlen(param[1]) - 1) '0' apres celui ci
- Avec cette nouvelle chaine de caractere nous allons parcourire chaque tableau de char num du tableau de structure t_dict, si nous trouvons une chaine egale alors nous ajouterons la chaine word de la meme structure au tableau que l'on retournera et si ce n'est pas le dernier `index`  alors on ajoutera un espace juste apres.
- si on ne trouve pas d'equivalent alors on free tout les tableau et on renvoie un message d'erreur