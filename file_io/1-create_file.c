#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - crea un archivo y escribe contenido en él.
 * @filename: nombre del archivo a crear.
 * @text_content: contenido a escribir en el archivo.
 *
 * Return: 1 en caso de éxito, -1 en caso de error.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	/* Verificar si el nombre del archivo es NULL */
	if (filename == NULL)
		return (-1);

	/* Crea el archivo  permisos rw------- (escrit y lect para el propietario) */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Si el conte no es NULL, calculamos su long y escribimos en el archivo */
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

	/* Cerrar el archivo después de escribir */
	close(fd);

	return (1);
}
