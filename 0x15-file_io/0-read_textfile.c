#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX stdout
*
* @filename: name of the text file
* @letters: number of letters to read and print
*
* Return: actual number of letters read and printed, otherwise 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t wcount, rcheck;
	char *buffer;

	/** check if file is present */
	if (filename == NULL)
		return (0);

	/** open the file */
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	/** allocate memory to buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer); /** clean up */
		return (0);
	}

	/** we read the file */
	rcheck = read(f, buffer, letters);
	if (rcheck == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcheck);
	if (wcount == -1 || rcheck != wcount)
		return (0);

	free(buffer); /** clean up */
	close(f); /** close the file */

	return (wcount);
}
