#include <stdio.h>

/**
 * main - Prints all arguments received
 *
 * @argc: Number of arguments
 *
 * @argv: Number of Vectors
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

