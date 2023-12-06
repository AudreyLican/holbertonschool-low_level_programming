#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename : name of the file to read and print
 * @text-content : string to add at the end of the file
 * 
 * Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int	len, file_to_change, file_modified;

	if (filename == NULL)
		return (-1);
	
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	file_to_change = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	if (file_to_change == -1)
		return (-1);

	file_modified = write (file_to_change, text_content, len);
	if (file_modified == -1)
	{
		close(file_to_change);
		return (-1);
	}

	close (file_to_change);
	return (1);
}
