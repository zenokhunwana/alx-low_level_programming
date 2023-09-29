#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints filename.
 * @argc: number of arguments.
 * @argv: arguments variable.
 * Return: 0
 */

int main(int argc, char *argv[])
{
int total, num, num1;
if (argc >= 2)
{
num = atoi(argv[1]);
num1 = atoi(argv[2]);
total = num *num1;
printf("%d\n", total);
}
else
{
printf("Error\n");
}
return (0);
}
