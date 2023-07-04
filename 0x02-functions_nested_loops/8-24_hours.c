#include "main.h"

/**
 * jack_bauner - print hours and minutes
 * Return: 0
 *
 */
void jack_bauner(void)
{
int hours;
int minutes;
for (hours = 0; hours <= 23; hours++)
{
for (minutes = 0; minutes <= 59; minutes++)
{
_putchar(hours + '0');
_putchar(':');
_putchar(minutes + '0');
_putchar('\n');
}
}
}
