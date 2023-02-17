#include <stdio.h>

/**
 * main - Prints all possible combinations
 * of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;

	for (; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
