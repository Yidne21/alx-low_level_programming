#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lch = 122;
	int ch;

	for (ch = 97; ch <= lch; ch++)
	{
		putchar (ch);

		if (ch == 122)
		{
			ch = 64;
			lch = 90;
		}
	}
	printf("\n");
	return (0);
}

