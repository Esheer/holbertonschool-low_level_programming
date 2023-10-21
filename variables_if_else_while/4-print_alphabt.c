#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters, except for e and q
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char eq;

	for (eq = 'a'; eq <= 'z'; eq++)
	{
		if (eq != 'e' && eq != 'q')
			putchar (eq);
	}
	putchar ('\n');

	return (0);
}

