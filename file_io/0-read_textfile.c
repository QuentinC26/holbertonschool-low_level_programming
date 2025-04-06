#include "main.h"

/**
 *read_textfile - function that reads a text file and prints it to the output.
 *@filename: name of the file
 *@letters: the letters of the file
 *Return: the letters of the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_d;
	/** f_d = file_description */
	char *memory;
	ssize_t letters_read;

	if (filename == NULL)
	{
		return (0);
	}

	f_d = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IROTH);
	if (f_d == -1)
	{
		return (0);
	}

	memory = malloc(letters);
	if (memory == NULL)
	{
		return (0);
	}

	letters_read = read(f_d, memory, letters);
	if (letters_read == -1)
	{
		return (0);
	}

	letters_read = write(STDOUT_FILENO, memory, letters_read);
	if (letters_read == -1)
	{
		return (0);
	}
	close(f_d);
	free(memory);
	return (letters_read);
}
