#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the highest value to print in the table
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int num = i * j;

			if (num == 0)
				putchar('0');
			else
			{
				int div = 10000;
				while (div > num)
					div /= 10;

				while (div >= 1)
				{
					putchar((num / div) + '0');
					num %= div;
					div /= 10;
				}
			}

			if (j != n)
				putchar(' ');
		}
		putchar('\n');
	}
}
