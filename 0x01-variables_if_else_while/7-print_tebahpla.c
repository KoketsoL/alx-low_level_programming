#include <stdio.h>

/**
 * main - prints lowecase alphabets in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
		putchar(y);

	putchar('\n');

	return (0);
}
