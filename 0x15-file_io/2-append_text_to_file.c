#include "main.h"

/**
* append_text_to_file - Appends text at the end of the file
*
* @filename: name of the text file
* @text_content: text content to append at the end of @filename text file
*
* NOTE: Does not create a file if it does not exist. Returns -1 if user does
* not have the required permission to write the file. Does not add anything
* to file if @text_content is NULL
*
* Return: 1 (success), otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f, wcount = 0, wcheck;

	if (filename == NULL)
		return (-1);

	/** open file with append flag with write rights */
	f = open(filename, O_APPEND | O_WRONLY);
	if (f == -1) /** check if file opening was a success */
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[wcount] != '\0')
			wcount++;

		wcheck = write(filename, text_content, wcount);
		if (wcheck == -1) /** check if appending was a success */
			return (-1);
	}

	close(filename); /** close file */
	return (1);
}
