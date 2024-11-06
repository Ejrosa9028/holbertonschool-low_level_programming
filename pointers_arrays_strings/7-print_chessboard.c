#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard to print.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/*Recorremos las filas*/
	for (i = 0; i < 8; i++)
	{
		/*Recorremos las columnas de cada fila*/
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]); /*Imprime caracter*/
		}

		_putchar('\n'); /*Imprime nueva linea*/
	}
}
