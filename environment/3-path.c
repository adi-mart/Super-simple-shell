#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_location - Get the location of a command in the PATH
 * @command: The command to find
 *
 * Return: The full path to the command if found, NULL otherwise
 */
int main(void)
{
    char *path = getenv("PATH");
    char *path_copy = strdup(path);
    char *dir = strtok(path_copy, ":");
    while (dir)
    {
        printf("%s\n", dir);
        dir = strtok(NULL, ":");
    }
    free(path_copy);
    return 0;
}
