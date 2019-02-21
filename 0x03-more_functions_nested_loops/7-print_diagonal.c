#include "holberton.h"

/**
 * print_diagonal - print a diagonal line n characters long
 * @n: the length of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
