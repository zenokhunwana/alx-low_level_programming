#include "main.h"

/**
 * void print_alphabet_x10 - print alphabets x 10
 * Return: 0
 */
void print_alphabet_x10(void)
{
char ch;
int run;
for (run = 0; run <= 9; run++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
