/**
 * _strlen - Returns the length of a string
 * @s: ptr to int
 * Return: len
 */

int _strlen(int *s)
{
	/* declarations */
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
