#include <stdio.h>

/**
 * main - Prints the number of arguments passed ro it
 *
 * @argc: number of arguments
 *
 * @argv: number of vectors
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
