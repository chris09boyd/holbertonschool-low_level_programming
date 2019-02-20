#include "holberton.h"

/**
* swap_int - swap the values of two int
* @a: first int
* @b: second int
*
*Return: void
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = *c;

}
