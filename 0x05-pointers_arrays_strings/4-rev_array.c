#include "holberton.h"

/**
 * reverse_array - reverse an integer array
 * @a: integer array
 * @n: size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b, temp;

	for (b = 0; b < n / 2; b++)
	{
		temp = *(a + b);
		*(a + b) = *(a + n - b - 1);
		*(a + n - b - 1) = temp;
	}
}
