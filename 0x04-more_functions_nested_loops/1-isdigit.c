#include "main.h"
/**
 * _isdigit - check a character is digit or not
 *
 * @c: is an integer value of a given character
 *
 * Return: 1 if the character is digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
