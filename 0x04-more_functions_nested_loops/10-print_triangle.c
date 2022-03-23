#include "main.h"
/**
 * print_triangle - prints a triangle with height equals to size
 * @size:is an integer and is the height of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (i == 1)
		_putchar('\n');
}
