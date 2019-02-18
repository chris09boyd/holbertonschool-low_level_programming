#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n = 'z';

	while (n >= 'a')
		putchar(n--);
	putchar('\n');
	return (0);
}
