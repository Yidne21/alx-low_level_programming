#include "main.h"
/**
 * _abs - computes the absolute value of the intger number
 *
 * @n : is an integer number
 *
 * Return: the absolute value of the intger number
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
