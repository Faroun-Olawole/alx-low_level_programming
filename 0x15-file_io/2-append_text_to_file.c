#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the file pointer.
 * @text_content: The string at the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file is not available the user lacks permission write  - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, camel = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (camel = 0; text_content[camel];)
			camel++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, camel);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
