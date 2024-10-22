#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: 0 on success
 */

int main(void)
{
printf("Size of a char: %lu bytes(s)\n", sizeof(char));
printf("Size of a int: %lu bytes(s)\n", sizeof(int));
printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}
