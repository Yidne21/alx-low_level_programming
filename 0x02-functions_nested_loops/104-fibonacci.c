#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i = 3, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;
	printf("%lu, ", j);
	while (i <= 91)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
		++i;
	}
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	i = 92;
	while (i <= 98)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
		++i;
	}
	printf("\n");
	return (0);
}
