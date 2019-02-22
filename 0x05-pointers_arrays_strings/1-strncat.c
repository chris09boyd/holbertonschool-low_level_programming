#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination 
 * @src: the source
 * @n: amount of bytes that need to be copied
 *
 * Return: pointer to destination 
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}
