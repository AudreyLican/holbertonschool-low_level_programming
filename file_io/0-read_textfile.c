#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename : name of the file to read and print
 * @letters : n number of letter to read and print
 * 
 * Return: the file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char	*temp;
	ssize_t	fd;
	ssize_t	r;
	ssize_t	w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (NULL);
	r = read(fd, temp, letters);
	w = write(STDOUT_FILENO, temp, r);

	free (temp);
	close (fd);
	return (w);
}
