#include <stdio.h>

/**
 * main - prints filename.
 * @argc: number of arguments.
 * @argv: arguments variable.
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
int sums;
if (argc >= 1)
{
printf("%d\n", argc - 1);
}
else
{
for (i = 1; i <= argc; i++)
{
sums =  sizeof(argv[i]);
}
printf("its me %d\n", sums);
}
return (0);
}
