#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar (ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
