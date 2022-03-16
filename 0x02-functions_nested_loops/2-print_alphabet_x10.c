#include "main.h"

/**
 * print_alphabet_x10 - prints a lower case alphabet character 10 times
 * the while loop iterate 10 times to print _putchar (ch)
 *
 * Return : there is no return value it's void function
 */
void print_alphabet_x10(void)
{
	int ch;
	int i = 0;

	while (i < 10)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar (ch);
		}
		_putchar ('\n');
	i++;
	}
}
