#include "main.h"

/**
 * _strncat - concatenates two strings
 * using n bytes from src
 * @src: input
 * @dest: input
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
