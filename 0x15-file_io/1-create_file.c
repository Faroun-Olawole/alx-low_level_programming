#include "main.h"

/**
 * create_file - file Created
 * @filename: A pointer to the file to create.
 * @text_content: A string to write the file.
 *
 * Return: If function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, c, cat = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cat = 0; text_content[cat];)
			cat++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(fd, text_content, cat);

	if (fd == -1 || c == -1)
		return (-1);

	close(fd);

	return (1);
}
