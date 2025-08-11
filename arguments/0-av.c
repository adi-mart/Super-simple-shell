#include <stdio.h>
/**
 * main - prints the arguments passed to the program
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0
 */

int main(int ac, char **av)
{
	char **ptr;
	int i;

	ptr = av;
	i = 0;

	while (*ptr != NULL)
	{
		printf("av[%d] is : %s\n", i, *ptr);
		ptr++;
		i++;
	}
	return (0);
}
