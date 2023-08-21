#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    int i;

    n = 402;
    printf("n=%d\n", n);
    i = reset_to_98(&n);
    printf("n=%d\n", i);
    return (0);
}
