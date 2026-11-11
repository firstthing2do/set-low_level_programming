
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The number to print
 *
 * Return: Nothing
 */
void print_number(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: The starting number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int step;

	step = (n <= 98) ? 1 : -1;

	while (1)
	{
		print_number(n);

		if (n == 98)
		{
			break;
		}

		_putchar(',');
		_putchar(' ');

		n += step;
	}

	_putchar('\n');
}

