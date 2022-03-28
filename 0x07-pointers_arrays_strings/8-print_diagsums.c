#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: The matrix of integers
 * @size: The size of the matrix
 * Return: 0 on success
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
		i++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
