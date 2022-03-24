#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i = 3, j, k, next;

	j = 1;
	k = 2;
	next = j + k;
	printf("%u, %u, ", j, k);
	while (i <= 98)
	{
		if (i == 98)
			printf("%u\n", next);
		else
			printf("%u, ", next);
		j = k;
		k = next;
		next = j + k;
		++i;
	}
	return (0);
}
