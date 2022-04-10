#include <stdio.h>
/**
 * main - E
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (k = i + 1; k <= 57; k++)
		{
			putchar(i);
			putchar(k);
			putchar(',');
			putchar(' ');
			if ((i == 47) && (k == 57))
			{
				break;
			}
		}
	}
	putchar('\n');

	return (0);
}
