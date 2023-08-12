#include <stdio.h>

/**
 * main - prints numbers of base 10 separated by a comma
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
