#include <stdio.h>

/**
 * main - prints lower and uppercase alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char y;
	char z;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);

	for (z = 'A'; z <= 'Z'; z++)
		putchar(z);

	putchar('\n');
	return (0);
}
