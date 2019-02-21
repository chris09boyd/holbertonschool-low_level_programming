#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, a;

	for (a = 0; str[a]; a++)
		;
	for (i = a / 2 + (a % 2 ? 1 : 0); i < a; i++)
		_putchar(str[i]);
	_putchar('\n');
}
