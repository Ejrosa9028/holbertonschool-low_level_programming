#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  /*For isdigit()*/

/**
 * main - copies the string pointed to by src
 * @argc: pointer to the destination buffer
 * @argv: pointer to the source string
 *
 * Return: pointer to dest
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	/*If no numbers are passed, print 0*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/*Loop through each argument and add it if it's a valid number*/
	for (i = 1; i < argc; i++)
	{
		/*Check if the argument is a valid number (only digits allowed)*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				/*If any character is not a digit, print Error and return 1*/
				printf("Error\n");
				return (1);
			}
		}

		/*Convert the argument to an integer and add it to the sum*/
		sum += atoi(argv[i]);
	}

	/*Print the final sum*/
	printf("%d\n", sum);
	return (0);
}

