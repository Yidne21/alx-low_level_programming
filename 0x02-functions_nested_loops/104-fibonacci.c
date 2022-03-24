#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i = 3, j, k, next;

	j = 1;
	k = 2;
	next = j + k;
	printf("%lu, %lu, ", j, k);
	while (i <= 98)
	{
		if (i == 98)
			printf("%lu\n", next);
		else
			printf("%lu, ", next);
		j = k;
		k = next;
		next = j + k;
		++i;
	}
	return (0);
}
