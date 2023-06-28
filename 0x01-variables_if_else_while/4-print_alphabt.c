#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print alphabet in lower case
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'A'; ch <= 'Z'; ch++)
{
char out = tolower(ch);
if (out != 'e' && out != 'q')
{
putchar(out);
}
}
putchar('\n');
return (0);
}
