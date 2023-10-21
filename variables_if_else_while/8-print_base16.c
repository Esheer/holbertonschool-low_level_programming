#include <stdio.h>

/**
 *  main - Print the numers numerbs of base 16 in lowercase
 *
 *  Return: Always 0 (Success)
 *
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}

