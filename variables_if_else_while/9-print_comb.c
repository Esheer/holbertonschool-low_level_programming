#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
         int digit = 0;
                while (digit < 10)
		{
	               putchar(digit + '0');
                if (digit < 9)
                {
                        putchar(',');
                        putchar(' ');
		}
                        digit++;
		}
                putchar ('\n');
                
                return (0);
}		
