#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: integer which is used to print the times table
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int row = 0, column, product;

	if (n >= 0 && n < 15)
	{
		while (row <= n)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
			row++;
		}
	}
}
