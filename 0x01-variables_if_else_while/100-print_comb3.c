#include <stdio.h>
/**
 * main - E
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (k = 48; k <= 57; k++)
		{
			putchar(i, k);
			if (i == 57 && k == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
