#include <stdio.h> 
#include <string.h>

extern char **environ; //environ est un tableau de chaînes de caractères (char *), 
//chaque élément ayant la forme "NOM=VALEUR".

// Fonction pour récupérer la valeur d'une variable d'environnement
char *_getenv(const char *name)
{
    char **env = environ; // Pointeur sur le tableau des variables d'environnement 
    // donc copies l’adresse du tableau global pour le parcourir avec env

    
    while (*env)// Parcours chaque variable d'environnement (chaines)
    {
        // Vérifie si le début de la chaîne (NOM=VALEUR) correspond bien au nom recherché (NOM)
        //Vérifie que juste après le nom, il y a un = 
        if (strncmp(*env, name, strlen(name)) == 0 && (*env)[strlen(name)] == '=')
        {
            return (&(*env)[strlen(name) + 1]);
            // Retourne l'adresse juste après le '=' (la valeur)
            //Exemple : si *env = "PATH=/usr/bin", alors tu renvoies l’adresse de "/usr/bin".
        }
        env++; // Passe à la variable suivante
    }
    return (NULL); // Si pas trouvé, retourne NULL
}


//main fait par l'ia

int main(int ac, char **av)
{
    char *value;
    // On déclare un pointeur value qui va recevoir la valeur de la variable d’environnement (une chaîne)
    if (ac != 2)
    {
        printf("Utilisation : %s NOM_VARIABLE\n", av[0]);
        //On affiche comment utiliser le programme : av[0] montre le nom du binaire.
        return (1);
    }
    value = _getenv(av[1]); // Cherche la variable demandée
    if (value)
        printf("%s\n", value); // Affiche la valeur si trouvée
    else
        printf("Variable non trouvée\n");
    return (0);
}
