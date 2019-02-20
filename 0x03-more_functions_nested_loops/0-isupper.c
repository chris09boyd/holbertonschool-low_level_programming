#include "holberton.h"

/**
 * _isupper - checks if the character is capitalized or uppercase
 *@c: the character used to 
 *
 *Return: 1 if upper or 0 if not
 */
 int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}