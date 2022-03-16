#include "main.h"
/**
 * _isalpha - check a given character is alpha or not
 *
 * @c: is the ascii value of the given character
 *
 * Return: 1 if is alphabet otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
