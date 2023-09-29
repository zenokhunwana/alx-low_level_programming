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
int sum = 0;
int i;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
char *ptr;
long num = strtol(argv[i], &ptr, 10);

if (*ptr != '\0' || num < 0)
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);
return (0);
}
