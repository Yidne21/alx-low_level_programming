#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is an integer number to be printed it's last digit
 *
 * Return: the last digit of an integer on success
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
