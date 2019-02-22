#include "holberton.h"

/**
 * _strncpy - copies a string from source to destination
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes to copy, at most
 *
 * Return: pointer to destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (ret);
}
