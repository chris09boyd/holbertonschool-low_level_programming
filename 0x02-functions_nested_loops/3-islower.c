#include "holberton.h"

/**
 * _islower - checks for lowercase characters
 * @c: character to check
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
