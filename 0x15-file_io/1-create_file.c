#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, counter;

	if (filename == NULL)
	{
		return (0);
	}
	if (text_content != NULL)
	{
		for (counter = 0; text_content[counter];)
		{
			counter++;
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, counter);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
