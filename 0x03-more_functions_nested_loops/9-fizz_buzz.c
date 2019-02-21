#include "holberton.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz
 *
 * Return: Always 0, always success!
 */
int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
	{	
		if (!(a % 15))
			printf("FizzBuzz ");
		else if (!(a % 5))
			printf("Buzz ");
		else if (!(a % 3))
			printf("Fizz ");
		else
			printf("%d ", a);
	}
	printf("Buzz\n");
	return (0);
}
