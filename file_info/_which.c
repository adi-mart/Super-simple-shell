#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char full_path[1024];
	char *dir;
	char *path;
	char *path_copy;
	int i;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s filename ...\n", av[0]);
        return 1;
    }

    path = getenv("PATH");
    if (!path)
        return 1;

    for (i = 1; i < ac; i++)
    {
        path_copy = strdup(path);
        if (!path_copy)
            continue;

        dir = strtok(path_copy, ":");
        while (dir)
        {
            snprintf(full_path, sizeof(full_path), "%s/%s", dir, av[i]);
            if (access(full_path, X_OK) == 0)
            {
                printf("%s\n", full_path);
                break;
            }
            dir = strtok(NULL, ":");
        }
        free(path_copy);
    }
    return 0;
}

