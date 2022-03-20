#include "main.h"
/**
 * _isupper - checks a character weather it is uppercase or not
 * @c: is an integer ascii value for the character given
 * Return: 1 if it uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
