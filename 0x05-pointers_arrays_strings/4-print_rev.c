#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line
 * @s: str
 * Return: reverse string
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1 ; i >= 0; i--)
	{
		putchar (s[i]);
	}

		putchar ('\n');

}
