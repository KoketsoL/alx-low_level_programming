#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 *  followed by a new line, to stdout
 *  @str: string
 *  Return: always 0
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
