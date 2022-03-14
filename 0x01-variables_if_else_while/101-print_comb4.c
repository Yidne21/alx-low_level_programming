#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	digit1 = '0';
	while (digit1 < '9')
	{
		for (digit2 = digit1 + 1; digit2 <= '9'; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= '9'; digit3++)
			{
				if ((digit2 != digit1) != digit3)
				{
					putchar (digit1);
					putchar (digit2);
					putchar (digit3);
					if (digit1 == '7' && digit2 == '8')
						continue;
					putchar (',');
					putchar (' ');
				}
			}
		}
	digit1++;
	}
	putchar ('\n');
	return (0);
}
