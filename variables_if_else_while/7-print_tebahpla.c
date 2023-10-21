#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char hola;
	for (hola = 'z'; hola >= 'a'; hola--)

		putchar (hola);
	
	putchar('\n');

	return (0);
}
