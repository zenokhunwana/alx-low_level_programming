#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* the last digit of the number stored in the variable n */
int main(void)
{
	int n, j;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* main code */
	j = n % 10;
	if (j > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, j);
	}
	else if (j < 6 && n != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, j);
	}
	else
	{
		printf("Last digit of %d is %i and is 0\n", n, j);
		
	}
	return (0);

}

