#include "main.h"

/**
 * append_text_to_file - append text at end of file
 * @filename: file to be appended to
 * @text_content: string to add at end of file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, counter;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (counter = 0; text_content[counter]; )
		{
			counter++;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);
	counter = write(o, text_content, counter);

	if (o == -1 || counter == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
