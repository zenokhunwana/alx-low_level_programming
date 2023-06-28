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
for (ch = 0; ch <= 15; ch++)
{
if (ch < 10)
{
putchar(ch + '0');
}
else
{
putchar(ch - 10 + 'a');
}
}
putchar('\n');
return (0);
}
