#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: string necessary to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, a;

	for (a = 0; str[a]; a++)
		;

	for (i = 0; i < a; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
