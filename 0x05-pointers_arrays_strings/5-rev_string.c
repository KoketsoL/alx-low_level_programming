#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int a, b;
	char c[1000];

	a = b = 0;
	while (s[a] != '\0')
	{
		c[a] = s[a];
		a++;
	}
	a--;
	while (a >= 0)
	{
		s[a] = c[b];
		a--;
		b++;

	}
		s[b++] = '\0';

}

