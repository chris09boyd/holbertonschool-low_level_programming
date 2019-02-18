#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a = '0';
	int b = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);

			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
