#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: a pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}

	return ('\0');
}
