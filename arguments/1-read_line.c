#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - reads a line from standard input
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0
 */
int main(int ac, char **av)

{
	char *line = NULL;  // Pointeur pour stocker la ligne saisie
	size_t len = 0;     // Taille du tampon
	ssize_t nread;      // Nombre de caractères lus

	while (1) // Boucle infinie
	{ 
		printf("$ ");  // Affiche le prompt
		nread = getline(&line, &len, stdin);  // Lit l'entrée de l'utilisateur

		if (nread == -1) {  // Vérifie la fin de fichier ou une erreur
			perror("getline"); // Affiche l'erreur
			break; // Sort de la boucle
		}

	printf("%s", line);  // Affiche la commande entrée
	} // Fin de la boucle

	free(line);  // Libère la mémoire allouée
	return 0; // Retourne 0 pour indiquer le succès
}
