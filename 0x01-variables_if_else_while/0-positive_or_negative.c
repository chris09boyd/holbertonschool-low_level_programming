#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
/* betty style doc for function main goes there */
int main(void)
/* This file was created for project 0x01*/
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%d is positive\n", n);
} else if (n == 0)
{
	printf("%d is zero\n", n);
} else
{
	printf("%d is negative\n", n);
}
return (0);
}
