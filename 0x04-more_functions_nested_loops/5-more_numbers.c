#include "main.h"
/**
 * more_numbers - prints a number form 0 t0 14 10 times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar ((j / 10) + '0');
			_putchar ((j % 10) + '0');
		}
		_putchar ('\n');
	}
}
