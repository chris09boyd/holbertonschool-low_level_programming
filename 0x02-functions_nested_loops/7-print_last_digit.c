#include "holberton.h"


/**
 * print_last_digit - prints the last digit of the integer
 * @n: integer that will be printed
 *
 * Return: a posive int
 */
int print_last_digit(int n)
{
	int a = _abs(n % 10);

	_putchar(a + '0');
	return (a);

}
