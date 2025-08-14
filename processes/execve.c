#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/usr", NULL};

    printf("Avant execve\n");
    execve(argv[0], argv, NULL); // Lance /bin/ls -l /usr
    perror("execve");
    return 0;
}
