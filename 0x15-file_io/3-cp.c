#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - 1024 bytes for a buf is allocated.
 * @file: the file buf.
 *
 * Return: the newly-allocated buf file.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - descriptors  of the close file.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: arguments number supplied.
 * @argv: pointer to the arguments.
 *
 * Return: 0
 *
 * Description: count is incorrect - exit code 97.
 * does not exist or cannot be read - exit code 98.
 * cannot be created or written to - exit code 99.
 * cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int cat, dog, r, j;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	cat = open(argv[1], O_RDONLY);
	r = read(cat, buf, 1024);
	dog = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (cat == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		j = write(dog, buf, r);
		if (dog == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(cat, buf, 1024);
		dog = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_file(cat);
	close_file(dog);

	return (0);
}
