#include "main.h"
/**
 * print_square - print n by n square with hashtag
 *
 * @n: integr and the length of square
 * Return: Always 0
 */
void print_square(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
