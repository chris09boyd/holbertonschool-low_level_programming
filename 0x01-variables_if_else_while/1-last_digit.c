#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
/* This file was created for project 0x01*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int LastDigit = n % 10;

	if (LastDigit > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	} else if (LastDigit == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	} else (LastDigit < 6) && (LastDigit != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
