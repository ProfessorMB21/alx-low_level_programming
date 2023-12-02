#include "main.h"

/**
* create_file - Creates a file
*
* @filename: name of the text file
* @text_content: text to write to the text file
*
* NOTE: The created file must has the permissions: rw-------
* If the file already exists, does not change the permissions.
* If the file already exists, it is truncated
*
* Return: 1 (success), otherwise -1 (fail)
*/
int create_file(const char *filename, char *text_content)
{
	int f, wcount = 0, wcheck;

	if (filename == NULL) /** check if filename exists */
		return (-1);

	/** create file if does not exist, otherwise truncate to 0 */
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1) /** check if file was created successfully */
		return (-1);

	if (text_content)
	{
		while (text_content[wcount] != '\0')
			wcount++;

		wcheck = write(f, text_content, wcount);
		/** check if write was a success */
		if (wcheck == -1)
			return (-1);
	}

	close(f);	/** close file */
	return (1);
}
