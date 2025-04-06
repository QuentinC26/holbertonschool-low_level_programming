#include "main.h"

/**
 *create_file - function that create a file.
 *@filename: name of the file
 *@text_content: the text of the file
 *Return: 1 (Success)
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t f_d;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}

	f_d = open(filename, O_RDWR | O_CREAT | S_IRUSR | S_IWUSR);
	if (f_d == -1)
	{
		return (-1);
	}

	close(f_d);
	return (1);
}
