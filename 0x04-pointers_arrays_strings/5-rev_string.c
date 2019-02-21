#include "holberton.h"

/**
 * rev_string - reverse a string
 *@s: string to be reversed
 *
 *Return: void
 */
void rev_string(char *s)
{
	int l = 0; i = 0;
	char t;

	for (i = 0; s[i]; i++)
			a++;

	for (i = 0; i < l / 2; i++)
	{
		t = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = t;
	}
}
