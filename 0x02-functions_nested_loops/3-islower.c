#include "main.h"

/**
 * _islower - checks a given character is lower case or not
 * @c : is an ascii value for the given character
 *
 * Return: 1 if it is lower case otherwise 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

