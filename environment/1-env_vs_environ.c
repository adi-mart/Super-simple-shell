#include <stdio.h>

// Ce programme montre la différence entre le paramètre env de main et la variable globale environ
extern char **environ; // Déclaration de la variable globale environ

int main(int argc, char **argv, char **env)
{
    // Affiche l'adresse du paramètre env (3ème paramètre de main)
    printf("Address of env (main's third parameter): %p\n", (void *)env);

    // Affiche l'adresse de la variable globale environ
    printf("Address of environ (global variable): %p\n", (void *)environ);

    // Compare les deux adresses
    if (env == environ)
    {
        printf("env and environ point to the same address\n"); // Si elles sont identiques
    }
    else
    {
        printf("env and environ point to different addresses\n"); // Si elles sont différentes
    }

    return (0);
}
