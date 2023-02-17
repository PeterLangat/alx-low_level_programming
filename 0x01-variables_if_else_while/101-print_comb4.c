#include <stdio.h>

/**
 * main - Prints all possible different
 * combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 0;

	for (; a < 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				if ((b != a) != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a == 7 && b == 8 && c == 9)
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
