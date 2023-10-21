#include <stdio.h>

/**
 * main - Print prints all single digit numbers of base 10 starting from 0
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
    putchar('\n');

    return (0);
}
