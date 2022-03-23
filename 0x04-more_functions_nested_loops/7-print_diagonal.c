#include "main.h"
/**
 * print_diagonal - prints a diagonal n times
 * @n: is an integer number and the length of slash diagonal
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
