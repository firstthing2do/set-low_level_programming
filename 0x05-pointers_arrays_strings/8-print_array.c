#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: array of integers
 * @n: number of elements to print
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
