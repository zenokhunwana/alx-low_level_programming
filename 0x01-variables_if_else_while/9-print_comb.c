#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all numbers with space
 * Return: 0
 *
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
putchar(',');
putchar(' ');
}
return (0);
}
