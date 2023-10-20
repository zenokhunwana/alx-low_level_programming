#include <stdio.h>

void printMessage(void) __attribute__ ((constructor));

/**
 * printMessage - print message before main function
 *
 */

void printMessage(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

