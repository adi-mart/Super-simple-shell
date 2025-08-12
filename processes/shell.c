#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    char *words[100];
    int status;

    while (1)
    {
        printf("#cisfun$ ");
        nread = getline(&line, &len, stdin);
        if (nread == -1)
        {
            perror("getline");
            break;
        }

        // Enlève le saut de ligne
        if (line[nread - 1] == '\n')
            line[nread - 1] = '\0';

        // Découpe la ligne en mots
        int count = 0;
        char *token = strtok(line, " ");
        while (token != NULL && count < 99)
        {
            words[count++] = token;
            token = strtok(NULL, " ");
        }
        words[count] = NULL;

        if (count == 0)
            continue;

        pid_t child_pid = fork();
        if (child_pid == -1)
        {
            perror("fork");
            continue;
        }
        if (child_pid == 0)
        {
            // Exécute la commande entrée
            if (execve(words[0], words, NULL) == -1)
            {
                perror("execve");
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            wait(&status);
        }
    }
    free(line);
    return 0;
}
