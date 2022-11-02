#include "main.h"

/**
 * read_textfile - function that reads text file and prints to std output
 * @filename: file to be read
 * @letters: number of letters to be printed
 *
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}

	temp = malloc(letters * sizeof(char));
	if (temp == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (0);
	}
	r = read(o, temp, letters);
	w = write(STDOUT_FILENO, temp, r);
	if (r == -1 || w == -1 || r != w)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(o);

	return (w);
}
