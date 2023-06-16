#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print whether the number stored is positive or negative
 *
 * Return:0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is a positive  number.\n", number);
	}
	else if (n < 0)
	{
		printf("%d is a negative number.\n", number);
	}
	else
	{
		printf("%d is zero.\n", number);
	}
	/* return 0 to indicate success */
	return (0);
}
