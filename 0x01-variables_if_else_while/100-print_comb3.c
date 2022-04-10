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
		for (k = i+1; k <= 57; k++)
		{
			putchar(i);
			putchar(k);
			if ((i == 47) && (k == 57))
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
