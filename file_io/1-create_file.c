#include "main.h"

/**
 * create_file - function that creates a file
 * @filename : pointer on the name of the file to create
 * @text_content : pointer to a string to write in a file
 *
 * Return: 1 on success, otherwise -1 for failure
*/
int create_file(const char *filename, char *text_content)
{
	int	new_file, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		;
	}
	new_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (new_file == -1)
		return (-1);
	w = write(new_file, text_content, len);
	if (w == -1)
	{
		close(new_file);
		return (-1);
	}
	close(new_file);

	return (1);
}
