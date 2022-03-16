#include "main.h"
/**
 * print_alphabet - print a lower case character
 * _putchar (ch) printes the caracter
 *
 * Return: there is no return its void
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar (ch);
	}
	_putchar ('\n');
}
