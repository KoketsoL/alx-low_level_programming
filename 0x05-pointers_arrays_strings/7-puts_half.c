#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: value
 * Return: half of input
 */

void puts_half(char *str)
{
	int len = 0;
	char *a = str;
	int n;

	while (*a != '\0')
	{
		a++;
		len++;

	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}

	else
	{
		n = (len + 1) / 2;
	}

	for ( ; n < len ; n++)
	{
		putchar(str[n]);
	}
		putchar('\n');

}
