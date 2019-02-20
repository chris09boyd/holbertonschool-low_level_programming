#include "holberton.h"

/**
* _strlen - length of string
* @s: the string that needs to be checked 
*
*Return: length of string
*/
int _strlen(char *s)
{
	int n = 0;

	while (*s++)
			n++;
	return (n);	
}
