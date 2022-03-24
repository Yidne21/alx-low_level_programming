#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i = 1, j = 1, k = 2, next, sum = 0;

	next = j + k;
	while (i <= 33)
	{
		if (j < 4000000 && j % 2 == 0)
			sum =+ j;
		j = k;
		k = next;
		next = j + k;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
