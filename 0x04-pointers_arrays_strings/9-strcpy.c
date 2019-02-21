#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		dest[a] = src[a];
			a++;
	}
	return (dest);
}
