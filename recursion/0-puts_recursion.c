#include "main.h"
#include <stdio.h>

/*
 * main - Prints a string followed by new line
 * @s - String to be printed
 *
 * Return - void
 *
 */


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
