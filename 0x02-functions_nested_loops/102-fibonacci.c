#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i = 3, j, k, next;

	j = 1;
	k = 2;
	next = j + k;
	printf("%ld, %ld, ", j, k);
	while (i <= 50)
	{
		if (i == 50)
			printf("%ld\n", next);
		else
			printf("%ld, ", next);
		j = k;
		k = next;
		next = j + k;
		++i;
	}
	return (0);
}
