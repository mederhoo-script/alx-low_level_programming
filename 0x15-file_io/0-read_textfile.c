#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: name of the file
 * @letters: letter's number
 *
 * Return: read output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int kk;
	ssize_t lr, lw;
	char *buffer;

	if (filename == NULL)
		return (0);
	kk = open(filename, O_RDONLY);
	if (kk == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(kk);
		return (0);
	}
	lr = read(kk, buffer, letters);
	close(kk);
	if (lr == -1)
	{
		free(buffer);
		return (0);
	}
	lw = write(STDOUT_FILENO, buffer, lr);
	free(buffer);
	if (lr != lw)
		return (0);
	return (lw);
}
