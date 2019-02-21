#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints the elements of array
 * @a: array
 * @n: array length
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b + 1 < n)
			printf(", ");
	}
	printf("\n");
}
