
#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num;
	unsigned int digits[10];
	int i;

	if (n < 0)
	{
		_putchar('-');
		num = (unsigned int)(-(n + 1)) + 1;
	}
	else
	{
		num = (unsigned int)n;
	}

	i = 0;
	do {
		digits[i] = num % 10;
		num /= 10;
		i++;
	} while (num > 0);

	while (i > 0)
	{
		i--;
		_putchar(digits[i] + '0');
	}
}

/**
 * print_diagsums - prints the sums of both diagonals
 * @a: pointer to the matrix
 * @size: size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	print_number(sum1);
	_putchar(',');
	_putchar(' ');
	print_number(sum2);
	_putchar('\n');
}

