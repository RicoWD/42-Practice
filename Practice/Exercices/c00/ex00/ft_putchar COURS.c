/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix5 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:44:00 by codephenix5       #+#    #+#             */
/*   Updated: 2024/10/18 19:02:10 by ep               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	// console :$> ./a.out stu aaaa p p p p p
	// argc(JS) = argv.length(); soit 8
	// argv(JS) = [ "./a.out", "stu", "aaaa", "p", "p", "p", "p", "p" ]
	// "./a.out" est lui même un tableau...
	// donc argv est un tableau de tableau
	// en y regardant de plus près dans la déclaration (pas l'utilisation)
	// char argv serait un caractère
	// char *argv serait une chaine de caractères
	// char **argv est donc un tableau qui contien des chaines de caractères
	// une étoile pour horizontal
	// une autre étoile pour vertical
	// C'est une sorte de tableau 2D

	// A l'utilisation :
	// argv est un pointeur global (adresse)
	// argv[n] est une chaine à la position n dans argv
	// argv[n][m] est un caractère à la position m de la chaine à la position n
	// on peut dire argv[mot][lettre] (attention les indices commencent à 0)

	(void) argc;
	(void) argv;
	ft_putchar('c');
	ft_putchar('\n');
	write(1, "coucou normal\n", 14);	
	write(2, "coucou erreur\n", 14);	
	ft_putchar('\n');
	write(1, &argv[1][2] , 1);
	// write exige un pointeur
	// write(channel, pointer, length);
	// "chaine" est une sorte de pointeur
	// 'c' en est pas un....
	// argv[1][2] est un char (pas un char *) donc ajouter & pour avoir l'adresse
	ft_putchar('\n');
	write(1, argv[1], 2);
	ft_putchar('\n');
	//write(1, argv[1], 12); // Méfiance....
	//ft_putchar('\n');
	// argv[1] désigne l'adresse de la premiere lettre du mot en position 1
	argv[1]++;	
	write(1, argv[1], 2);
	ft_putchar('\n');
	// argv++; // signifie mot suivant
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putchar('\n');
	printf("Nombre d'arguments : %d\n", argc);
	printf("1 er argument : %s\n", argv[0]);
	printf("2 eme argument : %s\n", argv[1]);
	printf("2 eme argument, 3ème lettre : %c\n\n", argv[1][2]);
	for (int mot = 0; mot < argc; mot++)
	{
		printf("Argument (%d) : |%s|\n", mot, argv[mot]);
	}
	return (0x7F);

	// ./a.out stu aaaa p p p p p 2> erreurs.log
	// cat erreurs.log
	// Bonjour
}
