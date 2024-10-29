#include <stdio.h>

/**
 * multiple - Imprime si es Fizz o Buzz
 *
 * @void: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void multiple(void)
{
	int num = 1;
	int resultado_3;
	int resultado_5;
	int multiple3 = 3;
	int multiple5 = 5;

	for (; num <= 100; num++)
	{
		resultado_3 = num % multiple3;
		resultado_5 = num % multiple5;

		if (resultado_3 == 0 && resultado_5 != 0)
		{
			printf("Fizz ");
		}
		else if (resultado_5 == 0 && resultado_3 != 0)
		{
			if (num == 100)
			{
				printf("Buzz");
			}
			printf("Buzz ");
		}
		else if (resultado_3 == 0 && resultado_5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{

			printf("%d ", num);
		}
	}

	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * This program prints the numbers from 1 to 100, replacing
 * multiples of three with "Fizz", multiples of five with "Buzz",
 * and multiples of both with "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	multiple();
	return (0);
}
