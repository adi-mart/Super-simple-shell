#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    pid_t child_pid;
    int i, status;
    char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

    for (i = 0; i < 5; i++)
    {
        child_pid = fork();
        if (child_pid == -1)
        {
            perror("fork");
            return (1);
        }

        if (child_pid == 0)
        {
            printf("Before execve\n");
            if (execve(argv[0], argv, NULL) == -1)
            {
                perror("Error:");
            }
            printf("After execve\n");;
        }
        else
        {
            wait(&status);
        }
    }
    return (0);
}
