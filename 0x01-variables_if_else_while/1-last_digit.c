#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
=======
 * The last digit of the number stored in the variable n 
 * Description using the main function
 * Return: 0
 */
>>>>>>> 7061d27339feec38217bc49af2ba0c9b52011e3e
int main(void)
{
	int n, j;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	if (n > 5)
=======
	/* main code */
	j = n % 10;
	if (j > 5)
>>>>>>> 7061d27339feec38217bc49af2ba0c9b52011e3e
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, j);
	}
	else if (j < 6 && j != 0)
	{
<<<<<<< HEAD
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of %d and is 0\n", n);
=======
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, j);
	}
	else
	{
		printf("Last digit of %d is %i and is 0\n", n, j);
>>>>>>> 7061d27339feec38217bc49af2ba0c9b52011e3e
	}
	return (0);
}

