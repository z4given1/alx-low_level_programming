#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: string to calculate length
 * Return: len
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
