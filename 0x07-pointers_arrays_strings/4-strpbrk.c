
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any matching character
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: pointer to the first match, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}

		i++;
	}

	return (NULL);
}

