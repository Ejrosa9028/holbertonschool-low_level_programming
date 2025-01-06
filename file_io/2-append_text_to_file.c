#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - agrega texto al final de un archivo.
 * @filename: nombre del archivo al que se debe agregar el texto.
 * @text_content: cadena de texto en NULL que se agregará al archivo.
 *
 * Return: 1 en caso de éxito, -1 en caso de error.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	/* Verificar si el nombre del archivo es NULL */
	if (filename == NULL)
		return (-1);

	/* Abrir el archivo en modo de solo escritura y al final del archivo */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Si text_content no es NULL, cal  long y lo escr al final del archivo */
	if (text_content != NULL)
	{
		/* Calcular la longitud del contenido */
		while (text_content[length])
			length++;

		/* Escribir el contenido en el archivo */
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Cerrar el archivo */
	close(fd);

	return (1);
}

