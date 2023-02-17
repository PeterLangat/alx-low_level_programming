#include <stdio.h>

/**
 * main - Print all possible different
 * combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;

	for (; a < 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			if (b != a)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a == 8 && b == 9)
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
