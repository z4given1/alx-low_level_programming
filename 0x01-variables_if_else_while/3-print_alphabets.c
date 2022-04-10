#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char lwrcase;
	char uprcase;

	for (lwrcase = 'a'; lwrcase <= 'z'; lwrcase++)
	{
		putchar(lwrcase);
	}
	for (uprcase = 'A'; uprcase <= 'Z'; uprcase++)
	{
		putchar(uprcase);
	}

	putchar('\n');
	return (0);
}
