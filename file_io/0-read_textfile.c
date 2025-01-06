#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - lee archivo de texto e imprime la salida estándar POSIX.
 * @filename: nombre del archivo a leer.
 * @letters: cantidad de caracteres que se deben leer e imprimir.
 *
 * Return: el número real de caracteres leídos e impresos,
 *          o 0 si ocurre un error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;                  /* Descriptor de archivo */
	ssize_t bytes_read, bytes_written;  /* Número de bytes leídos y escritos */
	char *buffer;            /* Buffer para almacenar los datos leídos */

	if (filename == NULL) /*Comprobamos si el nombre del archivo es NULL*/
		return (0);

	fd = open(filename, O_RDONLY); /*Abrimos el archivo solo para lectura*/
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters); /*Asignamos memoria para el buffer*/
	if (buffer == NULL)
	{
		close(fd);  /* Cerramos el archivo si falla la asignación de memoria */
		return (0);
	}

	bytes_read = read(fd, buffer, letters); /*Lee hasta letters byte del archivo*/
	if (bytes_read == -1)
	{
		free(buffer);  /* Liberamos el buffer si ocurre un error al leer */
		close(fd);     /* Cerramos el archivo */
		return (0);
	}

	/* Escribimos los bytes leídos en la salida estándar */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);  /* Liberamos el buffer si falla la escritura */
		close(fd);     /* Cerramos el archivo */
		return (0);
	}

	free(buffer); /*Liberamos el buffer y cerramos el archivo*/
	close(fd);

	return (bytes_written);  /* Retornamos el número de caracteres escritos */
}
