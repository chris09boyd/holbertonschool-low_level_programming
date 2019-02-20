#include "holberton.h"

/**
* swap_int - swap the values of two int
* @a: first integer
* @b: second integer
*
*Return: void
*/
void swap_int(int *a, int *b)
{
	if (a != b)
	{
		*a = *a ^ *b;
		*b = *a ^ *b;
		*a = *a ^ *b;
	}
}
