#include "holberton.h"

/**
 * print_square - prints a square of size
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, b;

	for (i = 0; i < size; i++)
	{
		for (b = 0; b < size; b++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
