#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * if statement that checks if the number. 
 * will assign a random number to the variable n each time it is executed.
 * number stored in the variable n is positive or negative
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
