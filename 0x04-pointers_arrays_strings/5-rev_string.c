#include "holberton.h"

/**
 * rev_string - reverse a string
 *@s: string to be reversed
 *
 *Return: void
 */
void rev_string(char *s)
{
	int a = 0; b = 0;
	char c;

	for (a = 0; s[b]; b++)
			a++;

	for (a = 0; a< 1 / 2; a++)
	{
		c = s[a - b - 1];
		s[a - b - 1] = s[b];
		s[i] = c;
	}
	