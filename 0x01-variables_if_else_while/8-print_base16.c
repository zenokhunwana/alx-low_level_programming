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
for (ch = 10; ch <= 15; ch++)
{
putchar(ch - 10 + 'a');
}
putchar('\n');
return (0);
}
