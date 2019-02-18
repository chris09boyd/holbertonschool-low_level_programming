#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n = '0';

	while (n <= '9')
		putchar(n++);
	n = 'a';
	while (n <= 'f')
		putchar(n++);
	putchar(10);
	return (0);
}
