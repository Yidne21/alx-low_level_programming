#include "main.h"
/**
 * more_numbers - prints a number form 0 t0 14 10 times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	char n, c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar ('0' + c);
		}
		_putchar ('\n');
	}
}
