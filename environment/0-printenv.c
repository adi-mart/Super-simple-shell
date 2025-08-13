#include <stdio.h>

// Déclaration de la variable globale 'environ' qui contient les variables d'environnement
extern char **environ;

int main(void)
{
    char **env = environ; // Pointeur vers le début du tableau des variables d'environnement

    while (*env) // Tant qu'il y a une variable d'environnement
    {
        printf("%s\n", *env); // Affiche la variable d'environnement courante
        env++; // Passe à la variable suivante
    }

    return (0); // Retourne 0 pour indiquer que tout s'est bien passé
}