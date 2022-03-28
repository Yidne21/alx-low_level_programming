#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches
 *         one of the bytes in `accept` or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int k, i;
	char *p;

	k = 0;
	while (s[k] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == s[k])
			{
				p = &s[k];
				return (p);
			}
			i++;
		}
		k++;
	}

		return (0);
}
