#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array
 * @n: numeber of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int temp;

	for (j = 0; j < n--; j++)
	{
		temp = a[j];
		a[j] = a[n];
		a[n] = temp;
	}

}
