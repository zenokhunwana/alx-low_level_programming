#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints filename.
 * @argc: number of arguments.
 * @argv: arguments variable.
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, total, num;
total = 0;
if (argc-1 <= 0)
{
printf("0\n");
}

for (i = 0; i < argc;i++)
{
if (isdigit(num) > 0)
{
num = atoi(argv[i]);
}
}
total += num;
printf("%d\n", total);


return (0);
}
