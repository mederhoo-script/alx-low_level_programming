#include "main.h"

/**
 * append_text_to_file - appends
 * @filename: name
 * @text_content: text content.
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int rwr;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (j = 0; text_content[j]; j++)
			;

		rwr = write(i, text_content, j);

		if (rwr == -1)
			return (-1);
	}

	close(i);

	return (1);
}
