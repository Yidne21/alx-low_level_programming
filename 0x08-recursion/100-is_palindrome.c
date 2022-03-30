#include "main.h"
/**
 * is_palindrome - checks a string is palindrome or not.
 * @s: is a string to be checked.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = 0;
	int h;
	int i = 0;

	while (s[i++] != '\0')
		len++;
	h = len -1;
	i = 0;
	while (h > 1)
	{
		if (s[i++] != s[h--])
		{
			return (0);
		}
	}
	return (1);
}
