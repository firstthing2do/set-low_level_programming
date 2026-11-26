
#include "main.h"

/**
 * _strspn - gets the length of a matching prefix
 * @s: string to examine
 * @accept: characters to accept
 *
 * Return: number of matching bytes at the beginning
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}

		if (accept[j] == '\0')
		{
			break;
		}

		count++;
		i++;
	}

	return (count);
}

