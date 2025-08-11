#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100] = "Cet exercice est incompréhensible aidez moi";
    char* words[10];
    size_t count = 0;

    char* token = strtok(string, " ");
    while (token != NULL)
    { 
        words[count] = token;
        count++;

        token = strtok(NULL, " ");
    }

    printf("Found: %zu words. They are:\n", count);
    for (size_t i = 0; i < count; i++)
    {
        puts(words[i]);
    }

    return 0;
}
