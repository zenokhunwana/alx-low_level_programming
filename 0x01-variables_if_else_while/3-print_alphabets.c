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
char up;
for (ch = 'A'; ch <= 'Z'; ch++)
{
char out = tolower(ch);
putchar(out);
}
for (ch = 'a'; ch <= 'z'; ch++)
{
up = toupper(ch);
putchar(up);
}
putchar('\n');
return (0);
}
