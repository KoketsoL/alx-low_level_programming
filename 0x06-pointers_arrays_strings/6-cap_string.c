#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: input
 * Return: string
 */
char *cap_string(char *)
{
	int index = 0;

	while (index)
	{
		while (!([index] >= 'a' && [index] <= 'z'))

		index++;

		if ([index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);

}

