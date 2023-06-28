#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print numbers in character
 * Return: 0
 *
 */

int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
