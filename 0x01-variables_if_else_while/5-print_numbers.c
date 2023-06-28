#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print numbers 0-9
* Return: 0
*/
int main(void)
{
int  ch;
for (ch = 0; ch <= 9; ch++)
{
printf("%i", ch);
}
putchar('\n');
return (0);
}
