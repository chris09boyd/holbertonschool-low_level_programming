#include "holberton.h"

/**
* _puts - prints the string with a newline
* @str: print the string
*
*Return: void
*/
void _puts(char *str)
{
	while (*str)
		_putchar (*str++);
	_putchar ('\n');	
}
