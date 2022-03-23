#include "main.h"
/**
 * print_line - prints straight lines n times
 * @n: an integer number which used us length of the line
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
