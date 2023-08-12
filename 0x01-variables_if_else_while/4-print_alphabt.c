#include <stdio.h>

/**
 * main - prints lowercase alphabets, except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y != 'q' || y != 'e')
			putchat(y);
	}

	putchar('\n');
	return (0);
}
