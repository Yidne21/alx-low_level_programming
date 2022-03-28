#include "main.h"
/**
 * *_memset - fills memeory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: a pointer area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (n > 0)
	{
		s[j] = b;
		j++;
		n--;
	}
	return (s);
}
