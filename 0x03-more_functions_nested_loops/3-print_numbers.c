#include "holberton.h"

/**
 * print_numbers - prints from 0 to 9
 *
 *
 * Return: void
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar (a + '0');
	}
	_putchar('\n');
}
