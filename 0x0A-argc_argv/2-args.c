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
if (argc >= 1)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
