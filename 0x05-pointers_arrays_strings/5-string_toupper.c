#include "holberton.h"

/**
 * string_toupper - converts strings to uppercase
 * @s: string to convert
 *
 * Return: char pointer
 */
char *string_toupper(char *s)
{
	char *ret = s;

	for (; *s; s++)
		if (*s >= 'a' && *s <= 'z')
			*s += 'A' - 'a';
	return (ret);
}
