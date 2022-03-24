#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: integer which is used to print the times table
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int row = 0, col, pro;

	if (n >= 0 && n < 15)
	{
		while (row <= n)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				_putchar(',');
				_putchar(' ');
				pro = row * col;
				if (pro <= 99)
					_putchar(' ');
				if (pro <= 9)
					_putchar(' ');
				if (pro >= 100)
				{
					_putchar((pro / 100) + '0');
					_putchar(((pro / 10)) % 10 + '0');
				}
				else if (pro <= 99 && pro >= 10)
				{
					_putchar((pro / 10) + '0');
				}
				_putchar((pro % 10) + '0');
			}
			_putchar('\n');
			row++;
		}
	}
}
