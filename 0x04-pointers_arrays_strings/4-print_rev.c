#include "holberton.h"

/**
 * print_rev - prints string in rev
 *@s: string printed
 *
 *Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	while (--a >= 0)
		_putchar(s[a]);
	_putchar('\n');
}
