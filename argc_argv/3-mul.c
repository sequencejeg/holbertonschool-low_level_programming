#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments received
 *
 * @argc: Number of arguments
 *
 * @argv: Number of Vectors
 *
 * Return:  0 (Works), 1 (Error)
 *
 */

int main(int argc, char *argv[])
{
	int answer;
	int v1;
	int v2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	v1 = atoi(argv[1]);
	v2 = atoi(argv[2]);
	answer = v1 * v2;

	printf("%d\n", answer);
	return (0);
}
