#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random number and prints whether it is positive,
 *        negative, or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
