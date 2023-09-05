#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array with arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int mult = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	mult = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%i\n", mult);
	return (0);
}

