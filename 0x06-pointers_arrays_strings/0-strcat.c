#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] != '\0'; index++)
		dest[dest_len + index] = src[index];
	dest[dest_len + index] = '\0';
	return (dest);
}
