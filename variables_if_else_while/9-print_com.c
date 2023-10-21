#include <stdio.h>

/**
 * main - print prints all single digit numerbs of base 10 starting from 0
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0'); // Inprime el digito como un caracter 

		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}

		a++;
	}
	putchar('\n');
	
	return (0);
}

	
