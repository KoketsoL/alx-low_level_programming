#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * return: 0 (success)
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);

	putchar('\n');
	return (0);
}
